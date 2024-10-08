#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKeyMode.h"
#include "EKoratBattleMenu.h"
#include "EKoratBattleOnlineMode.h"
#include "SSMainMenuTransitionBattleData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuTransitionBattleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlineBattleFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleOnlineMode BattleOnlineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleKeyMode BattleKeyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleMenu BattleMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleTimeLimit;
    
    SS_API FSSMainMenuTransitionBattleData();
};

