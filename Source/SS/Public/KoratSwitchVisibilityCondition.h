#pragma once
#include "CoreMinimal.h"
#include "KoratSwitchVisibilityCondition.generated.h"

USTRUCT(BlueprintType)
struct FKoratSwitchVisibilityCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAndCondition;
    
    SS_API FKoratSwitchVisibilityCondition();
};

