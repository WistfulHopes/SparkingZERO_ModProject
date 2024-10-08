#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleConversationMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleConversationMode : uint8 {
    Character,
    Narration,
    Gallery,
    TeamTalk,
    MainMenu,
    System,
};

