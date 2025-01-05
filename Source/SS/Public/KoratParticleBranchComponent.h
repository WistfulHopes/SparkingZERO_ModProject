#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratParticleBranchComponent.generated.h"

class AActor;
class UKoratFreeTimelineParticleBranchAssetGetter;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratParticleBranchComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> DefaultObject;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineParticleBranchAssetGetter* AssetGetter;
    
public:
    UKoratParticleBranchComponent(const FObjectInitializer& ObjectInitializer);

};

