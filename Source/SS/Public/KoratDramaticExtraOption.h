#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticExtraUnLockType.h"
#include "KoratDramaticBattleExtraDataList.h"
#include "KoratDramaticMission.h"
#include "KoratDramaticExtraOption.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticExtraOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticMission> DramaticMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleExtraDataList> UnlockExtraBattles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticExtraUnLockType UnLockType;
    
    SS_API FKoratDramaticExtraOption();
};

