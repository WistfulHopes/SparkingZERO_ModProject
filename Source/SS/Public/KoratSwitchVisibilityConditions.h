#pragma once
#include "CoreMinimal.h"
#include "KoratSwitchVisibilityCondition.h"
#include "KoratSwitchVisibilityConditions.generated.h"

USTRUCT(BlueprintType)
struct FKoratSwitchVisibilityConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratSwitchVisibilityCondition> Conditions;
    
    SS_API FKoratSwitchVisibilityConditions();
};

