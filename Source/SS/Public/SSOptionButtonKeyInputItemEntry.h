#pragma once
#include "CoreMinimal.h"
#include "SSOptionButtonKeyInputItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FSSOptionButtonKeyInputItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    SS_API FSSOptionButtonKeyInputItemEntry();
};

