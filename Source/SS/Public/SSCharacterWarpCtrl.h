#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSCharacterWarpCtrl.generated.h"

class ASSMapWarpDataAssetHolder;
class ULevelSequencePlayer;
class UObject;
class USSActionCameraDataAsset;

UCLASS(Blueprintable)
class ASSCharacterWarpCtrl : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSActionCameraDataAsset* ActionCameraWarpMoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsActiveBlastWarpControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsActiveImpactWarpControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsActiveCameraSendOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsPosUpdateWithDelay;
    
public:
    ASSCharacterWarpCtrl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleIsImpactWarpControlActive();
    
    UFUNCTION(BlueprintCallable)
    void ToggleIsCameraSendOffsetActive();
    
    UFUNCTION(BlueprintCallable)
    void ToggleIsBlastWarpControlActive();
    
    UFUNCTION(BlueprintCallable)
    void SetImpactWarpControlActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSendOffsetActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastWarpControlActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnWarpOverride(const UObject* WorldContextObject, bool InReturn, bool InLoop, const ULevelSequencePlayer* InSequencePlayer);
    
    UFUNCTION(BlueprintCallable)
    bool IsImpactWarpControlActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsCameraSendOffsetActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsBlastWarpControlActive();
    
private:
    UFUNCTION(BlueprintCallable)
    ASSMapWarpDataAssetHolder* GetMapWarpDataAssetHolder();
    
};

