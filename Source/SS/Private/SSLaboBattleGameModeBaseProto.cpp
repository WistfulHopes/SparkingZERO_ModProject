#include "SSLaboBattleGameModeBaseProto.h"

ASSLaboBattleGameModeBaseProto::ASSLaboBattleGameModeBaseProto(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSkipApearSceneStart = false;
}

bool ASSLaboBattleGameModeBaseProto::IsSkipApearSceneStart() const {
    return false;
}


