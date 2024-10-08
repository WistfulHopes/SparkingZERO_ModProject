#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSSoundGroupType.h"
#include "KoratEffectInteractDecalTypeDataList.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratObjectLimitDataList.h"
#include "KoratObjectLimitInterface.h"
#include "KoratSoundHandle.h"
#include "SSEffectDecalActor.generated.h"

class AKoratDestructionStaticMeshActor;
class UDecalComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USceneComponent;

UCLASS(Blueprintable)
class ASSEffectDecalActor : public AActor, public IKoratObjectLimitInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList InteractAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectInteractDecalTypeDataList DecalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double FadeValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double BurnIntencity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UMaterialInterface* InteractMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CurrentDynamicMaterialInstance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DisplayAlpha;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double DyingTimeSpan;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DecalFadeTimeNative;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartFadeOutFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvaluatedSequenceFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bRemoveFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratObjectLimitDataList ObjLimitGroupeID;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double LimitPriority;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedUpdateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSoundHandle SoundHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AKoratDestructionStaticMeshActor> RegisteredActor;
    
public:
    ASSEffectDecalActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateRotationNative(const bool bNoFadeValueUpdate);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNative(const double InDeltaTime, const bool InbCheckMaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetZ(const int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetY(const int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetX(const int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(const double InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetupDecal();
    
    UFUNCTION(BlueprintCallable)
    void SetSoundHandle(const ESSSoundGroupType InType, FKoratSoundHandle& InHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetRemoveFoliage(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLimitPriority(const double IsValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractAttribute(const FKoratInteractAtbTypeDataList InAttribute);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeValue(double InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDyingTimeSpan(double InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalType(const FKoratEffectInteractDecalTypeDataList InDecalType);
    
    UFUNCTION(BlueprintCallable)
    void SetBurnIntencity(const float InValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInstancedFoliageNative();
    
    UFUNCTION(BlueprintCallable)
    void InitMaterialInstanceNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratSoundHandle GetSoundHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDecalComponent* GetDecalComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void GetActorVectorNative();
    
    UFUNCTION(BlueprintCallable)
    void CreateMaterialInstanceNative();
    

    // Fix for true pure virtual functions not being implemented
};

