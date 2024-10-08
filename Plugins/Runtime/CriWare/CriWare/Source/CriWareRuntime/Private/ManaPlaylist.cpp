#include "ManaPlaylist.h"

UManaPlaylist::UManaPlaylist() {
    this->bIsAlpha = false;
    this->bIsMixedTypes = false;
    this->bIsSeamless = false;
}

void UManaPlaylist::RemoveAt(int32 Index) {
}

void UManaPlaylist::Remove(UManaMovie* ManaMovie) {
}

int32 UManaPlaylist::Num() {
    return 0;
}

bool UManaPlaylist::IsSeamless() {
    return false;
}

bool UManaPlaylist::IsMixedTypes() {
    return false;
}

bool UManaPlaylist::IsAlpha() {
    return false;
}

void UManaPlaylist::Insert(UManaMovie* ManaMovie, int32 Index) {
}

UManaMovie* UManaPlaylist::GetRandom(int32& InOutIndex) {
    return NULL;
}

UManaMovie* UManaPlaylist::GetPrevious(int32& InOutIndex) {
    return NULL;
}

UManaMovie* UManaPlaylist::GetNext(int32& InOutIndex) {
    return NULL;
}

UManaMovie* UManaPlaylist::Get(int32 Index) {
    return NULL;
}

void UManaPlaylist::Add(UManaMovie* ManaMovie) {
}


