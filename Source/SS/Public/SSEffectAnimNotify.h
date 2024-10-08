#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESSEffectAnimNotifyRotationBase.h"
#include "ESSEffectPlayMode.h"
#include "KoratGroupIdDataList.h"
#include "Templates/SubclassOf.h"
#include "SSEffectAnimNotify.generated.h"

class ASSEffectActorBase;

UCLASS(Blueprintable, CollapseCategories)
class USSEffectAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ManagedId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratGroupIdDataList GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASSEffectActorBase> EffectActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSEffectPlayMode PlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSEffectAnimNotifyRotationBase InRotationBase;
    
public:
    USSEffectAnimNotify();

};

