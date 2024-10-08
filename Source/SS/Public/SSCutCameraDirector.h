#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "ECameraGlobalSlot.h"
#include "ECameraLocatorType.h"
#include "ECameraType.h"
#include "EFocusTargetType.h"
#include "ELerpType.h"
#include "ELookAtTargetLocatorType.h"
#include "ELookAtTargetType.h"
#include "ERootDirectorReconnectPriorityType.h"
#include "ESSCutCameraBlendLineType.h"
#include "ESSCutCameraBlendRateType.h"
#include "SSCameraConnectOption.h"
#include "SSCameraConnected.h"
#include "SSCameraConnectedQueue.h"
#include "SSCameraReadyQueue.h"
#include "SSCutCameraBlendFactor.h"
#include "SSCutCameraInertiaFactor.h"
#include "SSSlotParameter.h"
#include "SSSlotParameterStatic.h"
#include "Templates/SubclassOf.h"
#include "SSCutCameraDirector.generated.h"

class ASSBindingOriginActor;
class ASSCameraManager;
class ASSCutCameraActor;
class ASSCutCameraLocator;
class ASSFocusTargetActor;
class ASSLookAtTargetActor;
class ASSLookAtTargetLocator;
class UCurveFloat;
class ULegacyCameraShake;
class USSAnimePersComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ASSCutCameraDirector : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirectorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraGlobalSlot MainCameraViewSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagWeightPosToAng;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLagPosEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLagPosLimitEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosLimitFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosLimitBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosLimitRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosLimitUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELerpType LagPosLerpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagPosLerpExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCentrifugalForceAccumlator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CentrifugalForceAccumlatorMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CentrifugalForceAccumlatorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CentrifugalForceAccumlatorDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CentrifugalForceAccumlatorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrevMaxPosSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLagCamRollEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DelayPitchCamEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayPitchSpeedMaxCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLagLatPosEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableNewLagLatPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLagFilmbackScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLagFilmbackScaleDelayCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosCalibrationFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosCalibrationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosCalibrationLengthW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosCalibrationNowLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosCalibrationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FovLimitAngleLatNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FovLimitAngleLatFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FovLimitAngleLatNearRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FovLimitAngleLatFarRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugFovLimitAngleLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatPosSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLatSpeedBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrevMaxLatPosSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayRollCamRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRollMaxScaleCamEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollMaxScaleCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewFilmbackArgorizm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVirtualFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcAdjustSplitHVBaseCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcAdjustSplitHVDelayCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcAdjustSplitHVAfterLagScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugNormalShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugHandyShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugHandyShakeInGameOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShakeForceShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceShakeManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugLineWithCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugNoizeCheckLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugNoizeCheckLagBaseWeightLength;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCameraManager* CameraManagerLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCameraManager* CameraManagerHandyLocal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdditiveInputAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdditiveInputAngularVelocityReturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdditiveInputAngularVelocityInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdditiveInputAngularVelocityNoNeutralMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveInputAngularVelocityInertiaNoNeutralModeDecayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> FloatCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FloatCurveNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ULegacyCameraShake>> CameraShakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSAnimePersComponent* AnimePersComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PhysicalDisparityDecayScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PhysicalDisparityDecayHeightScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PhysicalDisparityDecayWidthScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicalDisparityCamAddTargeDistanceAuto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicalDisparityCamAddHeightAssumptionHeightScaleAuto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPhysicalDisparity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugPhysicalDisparityAddHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPhysicalDisparityAddCamLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPhysicalDisparityAddFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCutCameraInertiaFactor> PreMainCameraInertias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SecondBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SecondMutiBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNewSubSlotArgorizm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCameraReadyQueue> CameraReadySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCameraConnectedQueue> CameraSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineComponent*> SplineComponentCams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineComponent*> SplineComponentLats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSSlotParameterStatic> SlotParameterStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSSlotParameter> SlotParameter;
    
public:
    ASSCutCameraDirector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMainCamera(ECameraGlobalSlot InSlot, const FSSCutCameraBlendFactor& InBlendFactor, float InDeltaTime, double InWorldTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBlendSecond(float InDeltaTime, ECameraGlobalSlot InSlot, const TArray<FSSCutCameraBlendFactor> InBlendFactors, float InBlendRate, ESSCutCameraBlendRateType InBlendRateType, ESSCutCameraBlendLineType InBlendLineType, FSSCutCameraBlendFactor& OutBlendFactor, const double InWorldTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBlend(float InDeltaTime, ECameraGlobalSlot InSlot, ESSCutCameraBlendRateType InBlendRateType, ESSCutCameraBlendLineType InBlendLineType, const FSSCameraConnectedQueue& connectedQueue, TArray<FSSCutCameraBlendFactor>& OutSecondBlendFactors, float& OutSecondBlendRate, double InWorldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool SweepCutCamera(FHitResult& OutHitResult, const FVector& InLatPos, const FVector& InCamPos);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerControllerID(int32 InPlayerControllerID);
    
    UFUNCTION(BlueprintCallable)
    void SetManualCamera(ASSCutCameraActor* InCameraInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetMainCameraViewSlot(ECameraGlobalSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetForcePriorityDownDelay(ECameraGlobalSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetForcePriorityDown(ECameraGlobalSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    void ResetSlot(ECameraGlobalSlot InSlot, bool InResetLag);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseLookAtTargetToPool(const int32 InLookAtTargetHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseLookAtTargetLocatorToPool(const int32 InLookAtTargetLocatorHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseFocusTargetToPool(const int32 InFocusTargetHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCameraToPool(const int32 InCameraHandle, const ECameraType InCameraType);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCameraManagerToPool(const int32 InCameraManagerHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCameraLocatorToPool(const int32 InCameraLocatorHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseBindingOriginToPool(const int32 InBindingOriginHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReconnectManualCamera(ECameraGlobalSlot InSlot, float InLerpTimeCam, float InLerpTimeLat);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayShakeGlobal(int32 InShakeAssetIDOrigin, ASSCameraManager* InCameraManager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASSCutCameraActor* OnNewCameraFromPool(const ECameraType InCameraType);
    
    UFUNCTION(BlueprintCallable)
    bool IsSecondBlend();
    
    UFUNCTION(BlueprintCallable)
    bool IsMyDirector(int32 InRootPlayerControllerID);
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableReconnectManualCamera(ECameraGlobalSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerControllerID();
    
    UFUNCTION(BlueprintCallable)
    ASSLookAtTargetLocator* GetNewLookAtTargetLocatorFromPool(const ELookAtTargetLocatorType InLookAtTargetLocatorType);
    
    UFUNCTION(BlueprintCallable)
    ASSLookAtTargetActor* GetNewLookAtTargetFromPool(const ELookAtTargetType InLookAtTargetType);
    
    UFUNCTION(BlueprintCallable)
    ASSFocusTargetActor* GetNewFocusTargetFromPool(const EFocusTargetType InFocusTargetType);
    
    UFUNCTION(BlueprintCallable)
    ASSCameraManager* GetNewCameraManagerFromPool(bool InDontIncrease);
    
    UFUNCTION(BlueprintCallable)
    ASSCutCameraLocator* GetNewCameraLocatorFromPool(const ECameraLocatorType InCameraLocatorType);
    
    UFUNCTION(BlueprintCallable)
    ASSBindingOriginActor* GetNewBindingOriginFromPool();
    
    UFUNCTION(BlueprintCallable)
    ASSCutCameraActor* GetManualCamera();
    
    UFUNCTION(BlueprintCallable)
    ECameraGlobalSlot GetMainCameraViewSlot();
    
    UFUNCTION(BlueprintCallable)
    ASSCutCameraActor* GetMainCamera(ECameraGlobalSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    ASSCutCameraActor* GetLastConnectedCamera(ECameraGlobalSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    float GetLastConnectedBlendTime(bool InLookAtTarget, ECameraGlobalSlot InSlot, FString& OutDebugBlendProfile, FSSCameraConnectOption& OutCameraConnectOption);
    
    UFUNCTION(BlueprintCallable)
    bool GetLastConnected(ECameraGlobalSlot Slot, FSSCameraConnected& OutLastConnected);
    
    UFUNCTION(BlueprintCallable)
    float GetLastBlendRate(ECameraGlobalSlot Slot, double InWorldTime, float& OutDecayRateCam, float& OutDecayRateLat, FVector& OutFilmbackScale);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDirectorID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetConnectedQueueMax(ECameraGlobalSlot InCameraSlot);
    
    UFUNCTION(BlueprintCallable)
    FSSCameraConnectedQueue GetConnected(ECameraGlobalSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    void EnableSecondBlend(bool InSecondBlend);
    
    UFUNCTION(BlueprintCallable)
    void EmptyConnectReadyQueue();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectSlotOld(ECameraGlobalSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    void DisconnectManualCamera(FSSCameraConnected& OutConnectedCamera, double InWorldTime, float InLerpTimeCam, float InLerpTimeLat);
    
    UFUNCTION(BlueprintCallable)
    void DisconnectFadeCamera(ECameraGlobalSlot InSlot, double InWorldTime, const float InLerpTimeCam, const float InLrepTimeLat);
    
    UFUNCTION(BlueprintCallable)
    void DisconnectAllOneDelayPostPhysics();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectAllOne();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectAll();
    
    UFUNCTION(BlueprintCallable)
    void DisableReconnectManualCameraAllSlot(bool InDisable);
    
    UFUNCTION(BlueprintCallable)
    void DisableReconnectManualCamera(ECameraGlobalSlot InSlot, bool InDisable);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetViewTargetToManual(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void ConnectManualCamera(ECameraGlobalSlot InSlot, double InWorldTime);
    
    UFUNCTION(BlueprintCallable)
    void ConnectLatentCamera(ECameraType InCameraType, ECameraGlobalSlot InCameraSlot, double InSequencerStartTime, int32 InSectionStartFrameOrigin, int32 InSectionEndFrameOrigin, bool InReverseTrack);
    
    UFUNCTION(BlueprintCallable)
    void ConnectCamera(ASSCutCameraActor* InCameraInstance, ECameraType InCameraType, ECameraGlobalSlot InCameraSlot, bool InForce, double InSequencerStartTime, int32 InSectionStartFrame, int32 InSectionEndFrameCam, int32 InSectionEndFrameLat, bool InReverseTrack, double InDebugWorldTime, bool InThirdCameraCancel, ERootDirectorReconnectPriorityType InReconnectPriorityType);
    
    UFUNCTION(BlueprintCallable)
    void CheckReconnectManualCamera(ECameraGlobalSlot Slot, const double InWorldTime);
    
    UFUNCTION(BlueprintCallable)
    void CheckLatentConnected(ECameraGlobalSlot Slot, const double InWorldTime);
    
};

