#include "KoratPostProcessChameleonOverwriteComponent.h"

UKoratPostProcessChameleonOverwriteComponent::UKoratPostProcessChameleonOverwriteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseParameterNameList.AddDefaulted(654);
    this->KoratPostProcess = NULL;
}

TArray<FString> UKoratPostProcessChameleonOverwriteComponent::GetPropertyNameList() {
    return TArray<FString>();
}

UKoratPostProcessChameleonComponent* UKoratPostProcessChameleonOverwriteComponent::GetKoratPostProcess() {
    return NULL;
}


