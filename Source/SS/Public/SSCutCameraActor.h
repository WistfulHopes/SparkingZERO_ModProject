#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "ECameraLocatorSocketType.h"
#include "ECameraLocatorTargetType.h"
#include "ECameraPhysicalDisparityDecayType.h"
#include "ECameraPhysicalDisparityTargetType.h"
#include "ECameraPhysicalDisparityType.h"
#include "EShakeForceType.h"
#include "SSCameraLastParameter.h"
#include "SSCutCameraActor.generated.h"

class AActor;
class ASSCharacter;
class ASSCutCameraActor;

UCLASS(Blueprintable)
class ASSCutCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShakeAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShakeForceType ShakeForceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraLastParameter LastParameter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float lifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StartBlendTimeCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StartBlendTimeLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EndBlendTimeCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EndBlendTimeLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString StartBlendFloatCurveCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString StartBlendFloatCurveLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString EndBlendFloatCurveCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString EndBlendFloatCurveLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 CameraSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraPhysicalDisparityType PhysicalDisparityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraPhysicalDisparityDecayType PhysicalDisparityDecayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraPhysicalDisparityDecayType PhysicalDisparityDecayTypeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraPhysicalDisparityDecayType PhysicalDisparityDecayTypeWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PhysicalDisparityAddHeightDecayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PhysicalDisparityCamAddLengthTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraPhysicalDisparityTargetType PhysicalDisparityTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraLocatorTargetType PhysicalDisparityTargetTypeSrc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraLocatorTargetType PhysicalDisparityTargetTypeDst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PhysicalDisparityTargetWeightAddLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PhysicalDisparityTargetWeightAddHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PhysicalDisparityTargetWeightAddWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PhysicalDisparityTargetCameraRootTransformActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> CharacterSrc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> CharacterDst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bCameraRelativeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraLocatorTargetType CameraRelativeModeTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraLocatorSocketType CameraRelativeModeSocketType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bStartAutoDetourCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEndAutoDetourCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEndFilmbackDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bStartFilmbackDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FakeFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector EffectiveStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FakeEndInterpolationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector EffectiveEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float InterpolationProportion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DofBlurSizeNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DofBlurSizeFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 DiaphragmBladeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidTerrainCamPosWidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawUnderTerrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugThickness;
    
public:
    ASSCutCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool SweepCutCamera(FHitResult& OutHitResult, const FVector& InLatPos, const FVector& InCamPos);
    
    UFUNCTION(BlueprintCallable)
    void SetManualBlendTime(float InBlendTimeCam, float InBlendTimeLat);
    
    UFUNCTION(BlueprintCallable)
    bool IsBakedLastParameter(bool InReverseTrack);
    
    UFUNCTION(BlueprintCallable)
    float GetStartBlendTimeOrigin(bool InLookAtTarget, FString& OutDebugBlendProfile);
    
    UFUNCTION(BlueprintCallable)
    FString GetStartBlendCurveNameOrigin(bool InLookAtTarget);
    
    UFUNCTION(BlueprintCallable)
    float GetRestTimeInStartBlendNative(bool InLookAtTarget, bool InReverseTrack, int32 InSectionEndFrame, ASSCutCameraActor* InSrcCamera, bool InCinemaBlendZero);
    
    UFUNCTION(BlueprintCallable)
    float GetRestTimeInStartBlendManual(bool InLookAtTarget, double InWorldTime, double InSequencerStartTime, ASSCutCameraActor* InSrcCamera, bool InCinemaBlendZero);
    
    UFUNCTION(BlueprintCallable)
    float GetPhysicalDisparityTargetWeightAddWidth();
    
    UFUNCTION(BlueprintCallable)
    float GetPhysicalDisparityTargetWeightAddLength();
    
    UFUNCTION(BlueprintCallable)
    float GetPhysicalDisparityTargetWeightAddHeight();
    
    UFUNCTION(BlueprintCallable)
    float GetManualBlendTime(bool InLookAtTarget, FString& OutDebugBlendProfile);
    
    UFUNCTION(BlueprintCallable)
    float GetFovVertical(bool InNoViewportResolution);
    
    UFUNCTION(BlueprintCallable)
    float GetFovHorizon();
    
    UFUNCTION(BlueprintCallable)
    float GetEndBlendTimeOrigin(bool InLookAtTarget, FString& OutDebugBlendProfile);
    
    UFUNCTION(BlueprintCallable)
    FString GetEndBlendCurveNameOrigin(bool InLookAtTarget);
    
    UFUNCTION(BlueprintCallable)
    float GetElapsedTimeInStartBlendNative(bool InLookAtTarget, bool InReverseTrack, int32 InSectionEndFrame, ASSCutCameraActor* InSrcCamera, bool InCinemaBlendZero);
    
    UFUNCTION(BlueprintCallable)
    FSSCameraLastParameter GetBakedParameter();
    
    UFUNCTION(BlueprintCallable)
    void BakeLastParameter(bool InReverseTrack, bool InForceBake);
    
};

