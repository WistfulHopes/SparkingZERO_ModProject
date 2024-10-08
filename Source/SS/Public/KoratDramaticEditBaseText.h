#pragma once
#include "CoreMinimal.h"
#include "EKoratReplaceTextCategry.h"
#include "KoratDramaticEditBaseText.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticEditBaseText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OriginalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratReplaceTextCategry TextCategory;
    
    SS_API FKoratDramaticEditBaseText();
};

