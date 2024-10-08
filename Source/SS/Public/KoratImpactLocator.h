#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratImpactTransformType.h"
#include "KoratImpactLocator.generated.h"

class ASSLevelSequenceActor;
class USceneComponent;

UCLASS(Blueprintable)
class AKoratImpactLocator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratImpactTransformType TransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOwnerSequencerDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedCheckAttachObjects;
    
    AKoratImpactLocator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDestroyOwnerLevelSeqauence(ASSLevelSequenceActor* InSequence);
    
};

