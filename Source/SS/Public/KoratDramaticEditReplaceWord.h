#pragma once
#include "CoreMinimal.h"
#include "EKoratReplaceTextCategry.h"
#include "KoratDramaticEditReplaceWord.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticEditReplaceWord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReplaceWord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratReplaceTextCategry TextCategory;
    
    SS_API FKoratDramaticEditReplaceWord();
};

