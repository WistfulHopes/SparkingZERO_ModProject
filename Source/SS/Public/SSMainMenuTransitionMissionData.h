#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionMode.h"
#include "SSMainMenuTransitionMissionData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuTransitionMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuMissionMode MissionMode;
    
    SS_API FSSMainMenuTransitionMissionData();
};

