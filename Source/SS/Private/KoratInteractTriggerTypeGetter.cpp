#include "KoratInteractTriggerTypeGetter.h"

UKoratInteractTriggerTypeGetter::UKoratInteractTriggerTypeGetter() {
    this->InstanceData = NULL;
}

void UKoratInteractTriggerTypeGetter::SetDefaultValue(const FKoratInteractTriggerTypeDataList& InType) {
}

FKoratInteractTriggerTypeDataList UKoratInteractTriggerTypeGetter::GetParameter_Implementation(const int32 InUniqueId) {
    return FKoratInteractTriggerTypeDataList{};
}


