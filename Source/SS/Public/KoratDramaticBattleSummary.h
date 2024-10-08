#pragma once
#include "CoreMinimal.h"
#include "KoratBugEatingString.h"
#include "KoratDramaticBattleSummary.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FKoratDramaticBattleSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> summaryImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBugEatingString summaryText;
    
    SS_API FKoratDramaticBattleSummary();
};

