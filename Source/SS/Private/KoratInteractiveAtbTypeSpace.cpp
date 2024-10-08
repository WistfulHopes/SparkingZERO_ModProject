#include "KoratInteractiveAtbTypeSpace.h"

UKoratInteractiveAtbTypeSpace::UKoratInteractiveAtbTypeSpace() {
}

bool UKoratInteractiveAtbTypeSpace::IsOneShot_Implementation() {
    return false;
}

FKoratInteractAtbTypeDataList UKoratInteractiveAtbTypeSpace::GetParameter(const int32 InUniqueId) {
    return FKoratInteractAtbTypeDataList{};
}


bool UKoratInteractiveAtbTypeSpace::CanPlay_Implementation() {
    return false;
}


