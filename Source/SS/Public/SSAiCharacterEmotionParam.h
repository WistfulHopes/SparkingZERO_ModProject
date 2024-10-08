#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSAiAddEmotionParam.h"
#include "SSAiCharacterEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiCharacterEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiAddEmotionParam Param;
    
    FSSAiCharacterEmotionParam();
};

