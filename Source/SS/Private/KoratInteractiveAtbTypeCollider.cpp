#include "KoratInteractiveAtbTypeCollider.h"

UKoratInteractiveAtbTypeCollider::UKoratInteractiveAtbTypeCollider() {
    this->Collider = NULL;
}

FKoratInteractAtbTypeDataList UKoratInteractiveAtbTypeCollider::GetParameter(const int32 InUniqueId) {
    return FKoratInteractAtbTypeDataList{};
}


