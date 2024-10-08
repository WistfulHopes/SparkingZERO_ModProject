#include "KoratNiagaraCutImageComponent.h"

UKoratNiagaraCutImageComponent::UKoratNiagaraCutImageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TextureValueName = TEXT("User.NS_SamplingPaperColor");
    this->Texture = NULL;
}


