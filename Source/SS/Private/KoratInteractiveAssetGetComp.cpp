#include "KoratInteractiveAssetGetComp.h"

UKoratInteractiveAssetGetComp::UKoratInteractiveAssetGetComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeGetter = NULL;
    this->TriggerGetter = NULL;
    this->InstanceData = NULL;
}

void UKoratInteractiveAssetGetComp::SetTriggerTypeGetterBlueprint(UClass* InTriggerTypeGetterBlueprint) {
}

void UKoratInteractiveAssetGetComp::SetAttributeGetter(UKoratInteractiveAtbTypeGetter* InAtbTypeGetter) {
}

void UKoratInteractiveAssetGetComp::SetAtbTypeGetterBlueprint(UClass* InAtbTypeGetterBlueprint) {
}


