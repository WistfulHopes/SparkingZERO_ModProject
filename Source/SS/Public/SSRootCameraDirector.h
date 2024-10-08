#pragma once
#include "CoreMinimal.h"
#include "ECameraGlobalSlot.h"
#include "EForceConnectDirectorMainCameraType.h"
#include "SSCameraConnectOption.h"
#include "SSCutCameraDirector.h"
#include "SSRootCameraDirector.generated.h"

UCLASS(Blueprintable)
class ASSRootCameraDirector : public ASSCutCameraDirector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZeroFrameCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BaseLerpWarpLatEternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceBaseLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DetourUseAfterImagePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDetour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetourNewArgorizm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourCircleBendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourCircleDivNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourCircleRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourStartRateCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourEndRateCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourCenterEndRateLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourStartRateLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourEndRateLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShakeCamRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShakeNearCamRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShakeFarCamRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShakeNearCamRangeScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShakeFarCamRangeScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugShakeCamRange;
    
public:
    ASSRootCameraDirector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsWatchEnemyCamera();
    
    UFUNCTION(BlueprintCallable)
    bool IsForceConnectedDirectorMainCamera();
    
    UFUNCTION(BlueprintCallable)
    bool GetWatchMenuCameraSlot(ECameraGlobalSlot& OutSlot);
    
    UFUNCTION(BlueprintCallable)
    float GetLastReconnectedBlendTime(bool InLookAtTarget, ASSCutCameraDirector* InDstDirector, ECameraGlobalSlot InDstSlot, FString& OutDebugBlendProfile, FSSCameraConnectOption& OutCameraConnectOption, ASSCutCameraDirector* InSrcDirector, ECameraGlobalSlot InSrcSlot);
    
    UFUNCTION(BlueprintCallable)
    void ForceDisconnectDirectorMainCamera();
    
    UFUNCTION(BlueprintCallable)
    void ForceDisableHandyShakeManualAll(bool InDisable);
    
    UFUNCTION(BlueprintCallable)
    void ForceConnectDirectorMainCamera(EForceConnectDirectorMainCameraType InForceConnectDirectorMainCameraType, int32 InPlayerConotrollerID, ECameraGlobalSlot InSlot, float InLerpTimeCam, float InLerpTimeLat);
    
    UFUNCTION(BlueprintCallable)
    void ConnectDirectorMainCamera(ECameraGlobalSlot InSlot, ASSCutCameraDirector* InDirector, float InLerpTime);
    
    UFUNCTION(BlueprintCallable)
    void CheckReconnectDirectorMainCamera(double InWorldTime);
    
    UFUNCTION(BlueprintCallable)
    bool CheckForceConnectDirectorMainCamera(double InWorldTime);
    
    UFUNCTION(BlueprintCallable)
    void AddReconnectDirector(ASSCutCameraDirector* InDirector);
    
};

