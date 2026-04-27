#include "SSCZSearchEffectRenderer.h"

ASSCZSearchEffectRenderer::ASSCZSearchEffectRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IlluminationStencilParam = NULL;
}

void ASSCZSearchEffectRenderer::OnSearchStateChangedMyself(const ASSCharacter* InCharacter, const FKoratSearchData& InSearchData, EKoratBattleSearchFactor InFactor) {
}


