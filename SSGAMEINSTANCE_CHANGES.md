# USSGameInstance Class Changes: October 2024 vs April 2026

## Summary
This report documents the structural changes to the `USSGameInstance` class between October 2024 and April 2026. The April 2026 version includes several new properties related to game modes and data managers, as well as offset shifts throughout the class structure.

**Class Size Change:**
- October 2024: Unknown (no size annotation in header)
- April 2026: 0x2C80 (11,392 bytes)

---

## Properties ADDED in April 2026

### 1. CharacterRestriction
- **Type:** `TArray<FKoratCharacterDataList>`
- **Offset:** 0x1138
- **Size:** 0x10
- **Purpose:** Appears to be a list of restricted characters (likely for game modes)

### 2. bModeNSRContinue
- **Type:** `bool`
- **Offset:** 0x1148
- **Size:** 0x1
- **Purpose:** Flag for Mode NSR (new game mode) continuation

### 3. bModeNSRContinueLoadAutoSave
- **Type:** `bool`
- **Offset:** 0x1149
- **Size:** 0x1
- **Purpose:** Flag to load autosave when continuing Mode NSR

### 4. ModeHUNDataManager
- **Type:** `class USSModeHUNManager*`
- **Offset:** 0x1660
- **Size:** 0x8
- **Purpose:** Manager for Mode HUN (Hunter mode or similar new game mode)

### 5. ModeNSRManager
- **Type:** `class USSModeNSRManager*`
- **Offset:** 0x1668
- **Size:** 0x8
- **Purpose:** Manager for Mode NSR (new game mode introduced in updates)

### 6. MaxDPTypeData
- **Type:** `TArray<int32>`
- **Offset:** 0x19D8
- **Size:** 0x10
- **Purpose:** Array storing maximum DP (Dragon Points/Destruction Points) type data

---

## Properties with OFFSET CHANGES

Many properties experienced offset shifts due to the insertion of new properties. Key examples include:

### Before New Properties (Around 0x1138):
All properties from `TrainingSetting` onwards shifted by approximately 0x18 bytes (24 bytes) to accommodate the three new properties:
- `CharacterRestriction` (0x10)
- `bModeNSRContinue` (0x1)
- `bModeNSRContinueLoadAutoSave` (0x1)
- Plus padding alignment

### Notable Offset Changes:

| Property Name | Oct 2024 Offset | Apr 2026 Offset | Shift |
|--------------|----------------|----------------|-------|
| TrainingSetting | N/A (implicit ~0x1138) | 0x1150 | +0x18 |
| BattleStartMode | N/A | 0x1190 | Shifted |
| BattleResult | N/A | 0x11A8 | Shifted |
| ReplayDataManager | N/A | 0x1428 | Shifted |
| DragonAdventureIFParam | N/A | 0x1488 | Shifted |
| GalleryParam | N/A | 0x1530 | Shifted |
| DramaticBattleOpeningLevelSequenceActor | N/A | 0x1638 | Shifted |

### After New Manager Properties (Around 0x1660):
Properties after the two new managers (`ModeHUNDataManager` and `ModeNSRManager`) shifted by an additional 0x10 bytes:

| Property Name | Oct 2024 Offset | Apr 2026 Offset | Shift from Previous |
|--------------|----------------|----------------|---------------------|
| bStartKoratPDramaticImageGeneration | N/A | 0x16D8 | +0x10 from manager additions |
| MissionMode | N/A | 0x171C | Shifted |
| NotificationManager | N/A | 0x19E8 | Shifted |

### After MaxDPTypeData (Around 0x19D8):
One final shift of 0x10 bytes after the `MaxDPTypeData` array:

| Property Name | Oct 2024 Offset | Apr 2026 Offset | Total Shift |
|--------------|----------------|----------------|-------------|
| NotificationManager | N/A (implicit ~0x19D8) | 0x19E8 | +0x10 |
| MainUserChangedCallbackId | N/A | 0x19F0 | +0x10 |
| InputDeviceManager | N/A | 0x1A00 | +0x10 |
| WaitingIconManager | N/A | 0x1A28 | +0x10 |

---

## Properties REMOVED

**None identified.** All properties from the October 2024 version appear to be present in the April 2026 version.

---

## New Functions/Methods ADDED

The following functions are present in April 2026 but were not in October 2024:

### Mode NSR Related:
1. **`ModeNSRContinue`**
   - Signature: `void ModeNSRContinue(const FKoratBattlePlayCharacter& InEnemyCharacter, bool bInLoadAutoSave)`
   - Purpose: Handles continuation of Mode NSR gameplay

2. **`GetModeNSRManager`**
   - Signature: `class USSModeNSRManager* GetModeNSRManager()`
   - Purpose: Returns the Mode NSR manager instance

### Battle Menu Functions:
3. **`IsBattleMenuModeHUN`**
   - Signature: `bool IsBattleMenuModeHUN()`
   - Purpose: Checks if current battle menu is Mode HUN

4. **`GetEKoratBattleMenuForBattle`**
   - Signature: `EKoratBattleMenu GetEKoratBattleMenuForBattle()`
   - Purpose: Gets the battle menu type specifically for battle context

### Battle Configuration:
5. **`SetDefaultBattleBGM`**
   - Signature: `void SetDefaultBattleBGM(const FKoratBGMDataList& InBattleBGM)`
   - Purpose: Sets the default battle background music

6. **`GetDefaultBattleBGM`**
   - Signature: `FKoratBGMDataList GetDefaultBattleBGM()`
   - Purpose: Gets the default battle background music

7. **`SetDamageCorrection`**
   - Signature: `void SetDamageCorrection(const EKoratBattleDamageCorrection InDamageCorrection)`
   - Purpose: Sets damage correction mode

8. **`SetDamageCorrectionMode`**
   - Signature: `void SetDamageCorrectionMode()`
   - Purpose: Sets the damage correction mode

9. **`GetDamageCorrection`**
   - Signature: `EKoratBattleDamageCorrection GetDamageCorrection()`
   - Purpose: Gets current damage correction setting

10. **`SetBattleCpuOptimization`**
    - Signature: `void SetBattleCpuOptimization(const bool InEnableCpuOptimization)`
    - Purpose: Enables/disables CPU optimization for battles

### Character Filtering:
11. **`RemoveNonExistEventBonusCharacterSort`**
    - Signature: `bool RemoveNonExistEventBonusCharacterSort(TArray<FKoratCharaSortMenuRecord>& OutFilter)`
    - Purpose: Removes non-existent event bonus characters from sort list

12. **`RemoveNonExistEventBonusCharacterFilter`**
    - Signature: `bool RemoveNonExistEventBonusCharacterFilter(TArray<FKoratCharacterFilterDataList>& OutFilter)`
    - Purpose: Removes non-existent event bonus characters from filter list

13. **`IsExistBattleMode010EPBonusCharacter`**
    - Signature: `bool IsExistBattleMode010EPBonusCharacter()`
    - Purpose: Checks if Battle Mode 010 EP bonus characters exist

### Special Conclusion:
14. **`GetSpConclusionResult`**
    - Signature: `EBattleWinLose GetSpConclusionResult()`
    - Purpose: Gets special conclusion result for battles

15. **`GetSearchOffStart`**
    - Signature: `bool GetSearchOffStart()`
    - Purpose: Unknown - possibly related to search functionality

### Modified Function Signatures:
Several existing functions had parameter signature changes (FString changed from const reference to pass-by-value):
- `SetUpAutoBattleLoopRandomExtraBattle` - **REMOVED** (not found in April 2026)
- Various Set functions now use pass-by-value for FString instead of const FString&

---

## Functions REMOVED

1. **`SetUpAutoBattleLoopRandomExtraBattle`**
   - Was present in October 2024
   - Not found in April 2026 version
   - Likely replaced or functionality merged into other functions

2. **`CheckSpConclusionWithKnockDown`**
   - Was: `EBattleWinLose CheckSpConclusionWithKnockDown() const`
   - Changed to: New function `GetSpConclusionResult()` (renamed/refactored)

---

## Structural Analysis

### Memory Layout Changes:
The class grew in size due to:
1. **3 new properties** related to Mode NSR (0x18 bytes with padding)
2. **2 new manager pointers** for Mode HUN and Mode NSR (0x10 bytes)
3. **1 new array** for MaxDPTypeData (0x10 bytes)
4. **Total new data:** ~0x38 bytes (56 bytes)

### Alignment and Padding:
The April 2026 version maintains proper alignment:
- Pointers aligned to 8-byte boundaries
- Arrays aligned to 16-byte boundaries (0x10)
- Padding bytes inserted after bool members to maintain alignment

### Critical Offset Ranges:
Properties in these offset ranges require particular attention when updating:
- **0x1138 - 0x1150:** New Mode NSR properties
- **0x1660 - 0x1670:** New manager pointers
- **0x19D8 - 0x19E8:** MaxDPTypeData and subsequent shifts

---

## Update Recommendations

### For Modders/Developers:
1. **Add the new properties** in the exact order and offsets shown above
2. **Update all offset annotations** for properties after 0x1138
3. **Add new manager class forward declarations:**
   - `class USSModeHUNManager`
   - `class USSModeNSRManager`
4. **Update includes** if these new managers require new header files
5. **Add new enum types** if needed:
   - `EKoratBattleDamageCorrection` (used in new damage correction functions)
6. **Update function declarations** to match new signatures
7. **Remove deprecated function:** `SetUpAutoBattleLoopRandomExtraBattle()`

### Testing Focus Areas:
After updating headers, test:
- Mode NSR functionality (new game mode)
- Mode HUN functionality (new game mode)
- Character restriction systems
- Event bonus character filtering
- Damage correction features
- CPU optimization in battles

### Compatibility Notes:
- **Save game compatibility:** The new properties may affect save game structure
- **Network compatibility:** Online features may require all players to have matching versions
- **Mod compatibility:** Existing mods that reference properties after offset 0x1138 will need updates

---

## Version Information
- **Analysis Date:** April 24, 2026
- **October 2024 Source:** `C:\Users\zchri\SparkingZERO_ModProject\Source\SS\Public\SSGameInstance.h`
- **April 2026 Source:** `C:\Program Files (x86)\Steam\steamapps\common\DRAGON BALL Sparking! ZERO\SparkingZERO\Binaries\Win64\CXXHeaderDump\SS.hpp` (Line 38766-39314)
- **Extracted April 2026 Class:** `C:\Users\zchri\SparkingZERO_ModProject\SSGameInstance_April2026.hpp`
