#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratAdditionalDamageInfo.h"
#include "KoratAttackCollisionParameter.h"
#include "SSAnimNotifyStateEvent.h"
#include "SSAnimNotifyStateAttackSignCollision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USSAnimNotifyStateAttackSignCollision : public USSAnimNotifyStateEvent {
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
    USSAnimNotifyStateAttackSignCollision();

};

