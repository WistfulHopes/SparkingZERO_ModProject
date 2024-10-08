#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditBaseTextDataList.h"
#include "KoratDRMEditWordTextDataList.h"
#include "KoratBugEatingString.generated.h"

USTRUCT(BlueprintType)
struct FKoratBugEatingString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditBaseTextDataList OriginalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditWordTextDataList ReplaceWord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditWordTextDataList ReplaceWord2;
    
    SS_API FKoratBugEatingString();
};

