#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EEffectActorBulletStatus.h"
#include "ESSEffectBlastImpactSpawnPointType.h"
#include "SSCharacterBlastBulletComponent.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterBlastBulletComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UParticleSystem* DominantEffectTopAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSEffectBlastImpactSpawnPointType DominantEffectTopSpawnPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UParticleSystem* DominantEffectBottomAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSEffectBlastImpactSpawnPointType DominantEffectBottomSpawnPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UParticleSystem* DominantEffectSplineAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSEffectBlastImpactSpawnPointType DominantEffectSplineSpawnPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UParticleSystem* InferiorEffectTopAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSEffectBlastImpactSpawnPointType InferiorEffectTopSpawnPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UParticleSystem* InferiorEffectBottomAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSEffectBlastImpactSpawnPointType InferiorEffectBottomSpawnPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UParticleSystem* InferiorEffectSplineAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSEffectBlastImpactSpawnPointType InferiorEffectSplineSpawnPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoveAmountSec;
    
    USSCharacterBlastBulletComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStatus(const EEffectActorBulletStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetDominance(const float InDominance);
    
    UFUNCTION(BlueprintCallable)
    void SetBulletTransform(const FTransform& InNewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetBulletLocation(const FVector& InNewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamBottomLocation(const FVector& InNewLocation);
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveBullet();
    
    UFUNCTION(BlueprintCallable)
    void BulletTraceCharacterWarp();
    
};

