#pragma once
#include "CoreMinimal.h"
#include "CineCameraSettings.h"
#include "UObject/NoExportTypes.h"
#include "FakeCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FFakeCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector EffectiveEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float InterpolationProportion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurrentFocalLength;
    
    SS_API FFakeCameraSettings();
};

