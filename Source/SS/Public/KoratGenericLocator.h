#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratGenericCenterTransformType.h"
#include "KoratGenericLocator.generated.h"

class ASSCharacter;
class ASSLevelSequenceActor;
class USceneComponent;

UCLASS(Blueprintable)
class AKoratGenericLocator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratGenericCenterTransformType TransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LocationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUpdateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* MainCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOwnerSequencerDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedCheckAttachObjects;
    
    AKoratGenericLocator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDestroyOwnerLevelSeqauence(ASSLevelSequenceActor* InSequence);
    
};

