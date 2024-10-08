#pragma once
#include "CoreMinimal.h"
#include "KoratPatternVoiceDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratPatternVoiceDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultCueID;
    
    SS_API FKoratPatternVoiceDataAssetRecord();
};

