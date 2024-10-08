#pragma once
#include "CoreMinimal.h"
#include "EManaSubtitlesEncoding.h"
#include "ManaSubtitleTrackInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FManaSubtitleTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaSubtitlesEncoding Encoding;
    
    FManaSubtitleTrackInfo();
};

