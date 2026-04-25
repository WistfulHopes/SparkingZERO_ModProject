// BPPropertyNullFix v3 - Wine-compatible, trampoline in DLL's own .text section
// No VirtualAlloc for executable memory — Wine/Proton doesn't honor PAGE_EXECUTE
//
// Strategy: Use an absolute jump (14 bytes) at the patch site to reach our DLL,
// since rel32 can't span the distance on x64.

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Force this into .text section so it's executable
#pragma code_seg(".text")

// The trampoline lives in our DLL's code section — always executable
// We'll fill in the return address at runtime
static volatile unsigned char g_trampoline[64] = {
    0x48, 0x85, 0xDB,                   // test rbx, rbx
    0x74, 0x1D,                          // jz skip (+29, to offset 34)
    // normal path: execute original 14 bytes then return
    0x48, 0x63, 0x43, 0x4C,             // movsxd rax, [rbx+0x4C]
    0x48, 0x03, 0xC1,                   // add rax, rcx
    0x48, 0x89, 0x5E, 0x30,             // mov [rsi+0x30], rbx
    0x48, 0x89, 0x46, 0x38,             // mov [rsi+0x38], rax
    // jmp back (absolute): FF 25 00 00 00 00 + 8-byte addr
    0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, // jmp qword ptr [rip+0]
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // return addr (filled at runtime)
    // skip path (rbx is null): also zero rdi so game's own null check skips the block
    0x48, 0x31, 0xC0,                   // xor rax, rax
    0x48, 0x31, 0xFF,                   // xor rdi, rdi (zero rdi for game's test rdi,rdi;je)
    0x48, 0x89, 0x5E, 0x30,             // mov [rsi+0x30], rbx (store null FProperty*)
    0x48, 0x89, 0x46, 0x38,             // mov [rsi+0x38], rax (store null data ptr)
    // jmp back (absolute)
    0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, // jmp qword ptr [rip+0]
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // return addr (filled at runtime)
};

#pragma code_seg()

static void ApplyPatch() {
    HMODULE hGame = GetModuleHandleA(NULL);
    if (!hGame) return;

    unsigned char* base = (unsigned char*)hGame;
    unsigned char* site = base + 0x2E111EA;

    // Verify original 14 bytes we'll overwrite:
    // 48 63 43 4C  movsxd rax, [rbx+0x4C]
    // 48 03 C1     add rax, rcx
    // 48 89 5E 30  mov [rsi+0x30], rbx
    // 48 89 46 38  mov [rsi+0x38], rax
    unsigned char expected[] = {
        0x48, 0x63, 0x43, 0x4C,
        0x48, 0x03, 0xC1,
        0x48, 0x89, 0x5E, 0x30,
        0x48, 0x89, 0x46, 0x38
    };
    for (int i = 0; i < 15; i++) {
        if (site[i] != expected[i]) return;
    }

    // Return address = site + 15 (after all 15 overwritten bytes)
    // Actually we overwrite 14 bytes (the jmp abs is 14 bytes)
    // but we include the original 15 bytes in the trampoline
    unsigned char* returnAddr = site + 15;
    unsigned long long retAddr = (unsigned long long)returnAddr;

    // Make trampoline writable temporarily to fill in addresses
    DWORD oldProt;
    VirtualProtect((void*)g_trampoline, sizeof(g_trampoline), PAGE_EXECUTE_READWRITE, &oldProt);

    // Fill return addresses in trampoline (at offsets 26 and 48)
    // Normal path return: offset 26
    unsigned char* t = (unsigned char*)g_trampoline;
    t[26] = (unsigned char)(retAddr);
    t[27] = (unsigned char)(retAddr >> 8);
    t[28] = (unsigned char)(retAddr >> 16);
    t[29] = (unsigned char)(retAddr >> 24);
    t[30] = (unsigned char)(retAddr >> 32);
    t[31] = (unsigned char)(retAddr >> 40);
    t[32] = (unsigned char)(retAddr >> 48);
    t[33] = (unsigned char)(retAddr >> 56);

    // Skip path return: offset 54
    t[54] = (unsigned char)(retAddr);
    t[55] = (unsigned char)(retAddr >> 8);
    t[56] = (unsigned char)(retAddr >> 16);
    t[57] = (unsigned char)(retAddr >> 24);
    t[58] = (unsigned char)(retAddr >> 32);
    t[59] = (unsigned char)(retAddr >> 40);
    t[60] = (unsigned char)(retAddr >> 48);
    t[61] = (unsigned char)(retAddr >> 56);

    VirtualProtect((void*)g_trampoline, sizeof(g_trampoline), PAGE_EXECUTE_READ, &oldProt);

    // Patch the crash site: 14-byte absolute jump to trampoline
    // FF 25 00 00 00 00 [8-byte address] + 1 NOP
    unsigned long long tramAddr = (unsigned long long)g_trampoline;

    DWORD oldProt2;
    if (!VirtualProtect(site, 15, PAGE_EXECUTE_READWRITE, &oldProt2)) return;

    site[0] = 0xFF;
    site[1] = 0x25;
    site[2] = 0x00;
    site[3] = 0x00;
    site[4] = 0x00;
    site[5] = 0x00;
    site[6]  = (unsigned char)(tramAddr);
    site[7]  = (unsigned char)(tramAddr >> 8);
    site[8]  = (unsigned char)(tramAddr >> 16);
    site[9]  = (unsigned char)(tramAddr >> 24);
    site[10] = (unsigned char)(tramAddr >> 32);
    site[11] = (unsigned char)(tramAddr >> 40);
    site[12] = (unsigned char)(tramAddr >> 48);
    site[13] = (unsigned char)(tramAddr >> 56);
    site[14] = 0x90; // NOP

    VirtualProtect(site, 15, oldProt2, &oldProt2);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    if (fdwReason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hinstDLL);
        ApplyPatch();
    }
    return TRUE;
}
