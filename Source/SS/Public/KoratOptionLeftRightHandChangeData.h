#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KoratOptionLeftRightHandChangeData.generated.h"

USTRUCT(BlueprintType)
struct FKoratOptionLeftRightHandChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey RightHandKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LeftHandKey;
    
    SS_API FKoratOptionLeftRightHandChangeData();
};

