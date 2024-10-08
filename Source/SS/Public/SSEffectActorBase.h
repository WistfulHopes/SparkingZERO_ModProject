#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratIdManagedClient.h"
#include "SSEffectActorBase.generated.h"

class UKoratDefaultIdData;

UCLASS(Blueprintable)
class ASSEffectActorBase : public AActor, public IKoratIdManagedClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDefaultIdData* IdDataInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* HomingTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InSocketName;
    
    ASSEffectActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void KillMySelf();
    

    // Fix for true pure virtual functions not being implemented
};

