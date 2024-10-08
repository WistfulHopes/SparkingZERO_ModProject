#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FakeCameraSettings.h"
#include "FakePersSettings.generated.h"

USTRUCT(BlueprintType)
struct FFakePersSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector EffectiveStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FakeEndInterpolationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FFakeCameraSettings> FakeCamera;
    
    SS_API FFakePersSettings();
};

