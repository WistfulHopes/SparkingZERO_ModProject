#include "KoratNiagaraMaterialComponent.h"

UKoratNiagaraMaterialComponent::UKoratNiagaraMaterialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialValueName = TEXT("User.NS_NockMaterial");
    this->MaterialInstance = NULL;
    this->TemplateSyatem = NULL;
    this->UseSkeletalMesh = NULL;
}

bool UKoratNiagaraMaterialComponent::SetupNiagaraSystem() {
    return false;
}

void UKoratNiagaraMaterialComponent::SetMaterialInstance(UMaterialInterface* InMaterialInstance) {
}

void UKoratNiagaraMaterialComponent::SetMaterial(UMaterialInterface* InMaterial) {
}

void UKoratNiagaraMaterialComponent::SetEnumTypeNiagara(const FName InName) {
}

void UKoratNiagaraMaterialComponent::SetEffectInteractNiagaraType(const FKoratEffectInteractNiagaraTypeDataList& InDataList) {
}

void UKoratNiagaraMaterialComponent::SetEffectInteractAttribute(const FKoratInteractAtbTypeDataList& InAttrDataList) {
}

bool UKoratNiagaraMaterialComponent::AddParameterNameAndMaterial(const FName& InName, UMaterialInterface* InMaterial) {
    return false;
}


