#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratParticleBranchComponent.generated.h"

class UKoratFreeTimelineParticleBranchAssetGetter;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratParticleBranchComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> DefaultObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineParticleBranchAssetGetter* AssetGetter;
    
public:
    UKoratParticleBranchComponent(const FObjectInitializer& ObjectInitializer);

};

