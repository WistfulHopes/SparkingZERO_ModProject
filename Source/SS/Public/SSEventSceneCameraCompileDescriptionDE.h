#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditCameraDataList.h"
#include "SSEventSceneCameraCompileDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneCameraCompileDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditCameraDataList Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVariablePlayRate;
    
    SS_API FSSEventSceneCameraCompileDescriptionDE();
};

