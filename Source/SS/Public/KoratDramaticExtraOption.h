#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockType.h"
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
    EKoratUnLockType ExtraUnlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDLCBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefaultUnlockWithNewIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEditable_DefaultUnlockWithNewIcon;
    
public:
    SS_API FKoratDramaticExtraOption();
};