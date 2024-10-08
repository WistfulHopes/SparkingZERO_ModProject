#pragma once
#include "CoreMinimal.h"
#include "EMCPDynamicPropertyListType.generated.h"

UENUM(BlueprintType)
enum class EMCPDynamicPropertyListType : uint8 {
    None,
    TournamentSearchList,
    TournamentCreateList,
};

