#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EManaMovieType.h"
#include "ManaVideoTrackInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FManaVideoTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint TextureDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint DisplayDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaMovieType Type;
    
    FManaVideoTrackInfo();
};

