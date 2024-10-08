#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FSSMenuButtonTextItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    SS_API FSSMenuButtonTextItemEntry();
};

