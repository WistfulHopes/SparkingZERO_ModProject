#pragma once
#include "CoreMinimal.h"
#include "KoratBattleScenePhaseDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleScenePhaseDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleScenePhaseDataList();
};

