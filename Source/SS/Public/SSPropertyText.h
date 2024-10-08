#pragma once
#include "CoreMinimal.h"
#include "SSPropertyText.generated.h"

USTRUCT(BlueprintType)
struct FSSPropertyText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ValueNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
    SS_API FSSPropertyText();
};

