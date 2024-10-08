#pragma once
#include "CoreMinimal.h"
#include "KoratPatternVoiceDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratPatternVoiceDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratPatternVoiceDataList();
};

