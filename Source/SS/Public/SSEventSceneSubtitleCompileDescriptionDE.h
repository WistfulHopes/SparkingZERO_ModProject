#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditBaseTextDataList.h"
#include "KoratDRMEditWordTextDataList.h"
#include "SSEventSceneSubtitleCompileDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneSubtitleCompileDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditWordTextDataList SpeakerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditBaseTextDataList BaseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditWordTextDataList> ReplaceWordTexts;
    
    SS_API FSSEventSceneSubtitleCompileDescriptionDE();
};

