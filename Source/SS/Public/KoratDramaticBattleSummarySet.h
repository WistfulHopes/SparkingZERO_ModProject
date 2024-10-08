#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleSummary.h"
#include "KoratDramaticBattleSummaryCommonData.h"
#include "KoratDramaticBattleSummarySet.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticBattleSummarySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleSummary> summaryOfStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleSummaryCommonData SummaryCommonData;
    
    SS_API FKoratDramaticBattleSummarySet();
};

