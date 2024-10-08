#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "SSInputDeviceInfo.h"
#include "SSInputDeviceManager.generated.h"

UCLASS(Blueprintable)
class SS_API USSInputDeviceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSInputDeviceInfo> PlayerInputDeviceInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKey> PressAnyButtonKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputDeviceId> ConnectedInputDeviceIds;
    
public:
    USSInputDeviceManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnInputDevicePairingChange(FInputDeviceId InputDeviceId, FPlatformUserId NewUserPlatformId, FPlatformUserId OldUserPlatformId);
    
    UFUNCTION(BlueprintCallable)
    void OnInputDeviceConnectionChange(EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId);
    
};

