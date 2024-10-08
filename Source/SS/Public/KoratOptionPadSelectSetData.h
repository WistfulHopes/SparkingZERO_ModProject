#pragma once
#include "CoreMinimal.h"
#include "KoratOptionPadSelectSetData.generated.h"

USTRUCT(BlueprintType)
struct FKoratOptionPadSelectSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> OperationPadSelectSet;
    
    SS_API FKoratOptionPadSelectSetData();
};

