#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTimeSliceData.h"
#include "KoratDramaticTimeSlices.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticTimeSlices {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleTimeSliceData OpeningEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleTimeSliceData NormalWinEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleTimeSliceData NormalLoseEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpeningEditSceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NormalWinEditSceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NormalLoseEditSceneId;
    
    SS_API FKoratDramaticTimeSlices();
};

