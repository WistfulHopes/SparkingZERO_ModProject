#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonImageItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FSSMenuButtonImageItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    SS_API FSSMenuButtonImageItemEntry();
};

