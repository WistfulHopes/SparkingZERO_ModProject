#pragma once
#include "CoreMinimal.h"
#include "KoratBattleDirecting.h"
#include "KoratBattleDirectingCondition.h"
#include "KoratBattleTimeSliceData.h"
#include "KoratBattleDirectingSetup.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleDirectingSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingCondition SpVictoryCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleTimeSliceData SpVictoryEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpVictorySceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingCondition SpDefeatCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleTimeSliceData SpDefeatEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpDefeatSceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleDirecting> Items;
    
    SS_API FKoratBattleDirectingSetup();
};

