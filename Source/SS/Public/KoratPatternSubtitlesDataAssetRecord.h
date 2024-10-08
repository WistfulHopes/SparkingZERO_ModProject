#pragma once
#include "CoreMinimal.h"
#include "KoratPatternSubtitlesDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratPatternSubtitlesDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableFreeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SubtilesIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HiddenSubtitles;
    
    SS_API FKoratPatternSubtitlesDataAssetRecord();
};

