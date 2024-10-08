#pragma once
#include "CoreMinimal.h"
#include "KoratPatternSubtitlesDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratPatternSubtitlesDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratPatternSubtitlesDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratPatternSubtitlesDataList) { return 0; }

