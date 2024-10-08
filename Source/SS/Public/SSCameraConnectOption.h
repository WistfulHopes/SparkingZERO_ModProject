#pragma once
#include "CoreMinimal.h"
#include "EBattleCameraDetourLerpType.h"
#include "SSCameraConnectOption.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraConnectOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDetour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndDetour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleCameraDetourLerpType DetourLerpType;
    
    SS_API FSSCameraConnectOption();
};

