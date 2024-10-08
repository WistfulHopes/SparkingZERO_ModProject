#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EKoratBulletRatType.h"
#include "ESSSoundGroupType.h"
#include "KoratEffectBulletRatParameter.h"
#include "KoratPoolableActorBase.h"
#include "SSBulletRatSpawnActor.generated.h"

class AActor;
class ALevelSequenceActor;
class ASSBulletBeamView;
class ASSBulletRatSpawnActorManager;

UCLASS(Blueprintable)
class ASSBulletRatSpawnActor : public AKoratPoolableActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatParameter BulletRatParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBulletRatType BulletRatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundCueSheetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSSoundGroupType SoundGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSoundSelectorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanSpawnFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSBulletBeamView> BulletBeamView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstTickSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletRatSpawnActorManager* BulletRatSpawnActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBorrowingPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALevelSequenceActor> LevelSequenceActor;
    
public:
    ASSBulletRatSpawnActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* SpawnActorBpImpl(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpawnedObjects(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterSelfToSpawnedActor(AActor* InSpawnedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTransformSpecifiedLocationBpImpl(const FVector& InLocation, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTransformForRandomScale(const FVector& InLocation, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTransformForRandomRotationAndScale(const FVector& InLocation, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomizedKnockScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomizedDecalScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRandomizedDecalRotation() const;
    
    UFUNCTION(BlueprintCallable)
    void GetKnockNiagaraTypeDisplayString(FString& OutString);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeleteSpawnedActor(AActor* InSpawnedActor);
    
};

