#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratBugEatingString.h"
#include "KoratDramaticThumbnailText.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticThumbnailText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBugEatingString ThumbnailText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ThumbnailColor;
    
    SS_API FKoratDramaticThumbnailText();
};

