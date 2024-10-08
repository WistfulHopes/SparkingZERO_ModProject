#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECameraGlobalSlot.h"
#include "EShakeAssetType.h"
#include "EShakeForceType.h"
#include "EShakeTargetType.h"
#include "SSShakeForceLastParameter.h"
#include "Templates/SubclassOf.h"
#include "SSCameraManager.generated.h"

class ASSCutCameraActor;
class UCameraShakeBase;
class ULegacyCameraShake;

UCLASS(Blueprintable)
class ASSCameraManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugLevelSequenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShakeClosing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShakeBase* ShakeInstanceGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULegacyCameraShake> ShakeClassGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShakeAssetIDGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULegacyCameraShake> CameraShakeInstancePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShakePlayingCompositMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ShakePlayingCameraGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandyShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EShakeAssetType ShakeAssetType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 ShakeAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraGlobalSlot ShakeCameraSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShakeForceType PreShakeForceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShakeForcePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSShakeForceLastParameter LastParameter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EShakeTargetType ShakeTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EShakeForceType ShakeForceType;
    
public:
    ASSCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopShakeGlobal(bool InCompositMode, ASSCutCameraActor* InDirectorMainCamera, bool InImmediate, bool InForceShakeManual, int32 InShakeAssetIDOrigin);
    
    UFUNCTION(BlueprintCallable)
    void PlayShakeGlobal(bool InCompositMode, ASSCutCameraActor* InDirectorMainCamera, float InScaleNormalShake, float InScaleHandyShake, const TSubclassOf<ULegacyCameraShake> InShakeClass, int32 InShakeAssetIDOrigin, bool InForceShakeManual);
    
};

