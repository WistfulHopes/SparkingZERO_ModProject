#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESSBulletBeamViewOverrideScaleType.h"
#include "KoratExecuteActorInterface.h"
#include "KoratInteractAtbTypeDataList.h"
#include "SSBulletSplineMeshInfo.h"
#include "SSEffectLoopEffectInfo.h"
#include "SSEffectParticleComponents.h"
#include "SSEffectSplineMeshes.h"
#include "SSBulletBeamView.generated.h"

class AKoratFreeTimelineActor;
class ASSBulletRatSpawnActorManager;
class UKoratSelectEffectColorComponent;
class UMaterialInstanceDynamic;
class UMovieSceneSequence;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASSBulletBeamView : public AActor, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BeamUpdateCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TransformHistoryIntervalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RootCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* LoopSplineCalcCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSBulletBeamViewOverrideScaleType OverrideScaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* TopEffectLocComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* BottomEffectLocComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* TopOffsetEffectLocComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* TopAtbEffectLocComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* BottomOffsetEffectLocComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ContactPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TopLocatorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BottomLocatorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ScaleTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ScaleBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialLoopLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshComponentNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialOffsetV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBulletSplineMeshInfo> MeshInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEffectLoopEffectInfo> LoopEffectsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEffectLoopEffectInfo> LoopEndEffectsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopEffectRayHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopEndEffectStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bStopScalingLoopAddEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bReserveDeactivateLoopAddEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEndMeshFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DebugSplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DebugSplineMeshLoopLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdateSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReflected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratSelectEffectColorComponent* SelectEffectColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList AttributeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKoratFreeTimelineActor* BulletRatFreeTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletRatSpawnActorManager* BulletRatSpawnActorManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DebugLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector DebugTopOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> TopLoopBottomDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEffectSplineMeshes> MeshCompoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEffectParticleComponents> LoopEffectComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEffectParticleComponents> LoopEndEffectComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlapObjects;
    
public:
    ASSBulletBeamView(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExecuteActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetBeamSplineComponent() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void SetOwnerSequenceInterface(UMovieSceneSequence* InSequence) override PURE_VIRTUAL(SetOwnerSequenceInterface,);
    
    UFUNCTION()
    void SetExecuteActorInterface(AActor* InExecuteActor) override PURE_VIRTUAL(SetExecuteActorInterface,);
    
    UFUNCTION()
    void SetEditorExecuteActorInterface(AActor* InEditorExecuteActor) override PURE_VIRTUAL(SetEditorExecuteActorInterface,);
    
    UFUNCTION()
    UMovieSceneSequence* GetOnewrSequenceInterface() const override PURE_VIRTUAL(GetOnewrSequenceInterface, return NULL;);
    
    UFUNCTION()
    AActor* GetExecuteActorInterface() const override PURE_VIRTUAL(GetExecuteActorInterface, return NULL;);
    
};

