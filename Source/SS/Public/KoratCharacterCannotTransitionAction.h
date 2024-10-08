#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratCharacterCannotTransitionAction.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterCannotTransitionAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> PreAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> CannotAction;
    
    SS_API FKoratCharacterCannotTransitionAction();
};

