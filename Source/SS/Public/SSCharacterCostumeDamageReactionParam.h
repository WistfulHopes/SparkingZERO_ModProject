#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratActionAttackType.h"
#include "EKoratCharacterMovementTransition.h"
#include "EKoratReactionDirection.h"
#include "ESituationOfOpponentWhenAttackHit.h"
#include "KoratActionDataList.h"
#include "KoratAddtiveReactionParameter.h"
#include "KoratHitBackMovementData.h"
#include "KoratHitEffectAfterHitStop.h"
#include "KoratHitStopData.h"
#include "SSCharacterCostumeDamageReactionParam.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterCostumeDamageReactionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterMovementTransition MovementTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratHitStopData HitStopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratHitEffectAfterHitStop HitEffectAfterHitStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInBlownAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratActionAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESituationOfOpponentWhenAttackHit OpponentHitSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList AttackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HitBackRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratHitBackMovementData HitBackMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ReactionAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratReactionDirection ReactionDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratReactionDirection RequestReactionDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAddtiveReactionParameter AddtiveReactionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastDamageReactionBySameRushDerived;
    
    SS_API FSSCharacterCostumeDamageReactionParam();
};

