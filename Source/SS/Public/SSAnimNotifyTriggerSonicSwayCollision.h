#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratAdditionalDamageInfo.h"
#include "KoratAttackCollisionParameter.h"
#include "SSAnimNotifyEvent.h"
#include "SSAnimNotifyTriggerSonicSwayCollision.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USSAnimNotifyTriggerSonicSwayCollision : public USSAnimNotifyEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAttackCollisionParameter CollisionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAdditionalDamageInfo AddtionalDamageInfo;
    
public:
    USSAnimNotifyTriggerSonicSwayCollision();

};

