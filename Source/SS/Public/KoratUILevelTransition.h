#pragma once
#include "CoreMinimal.h"
#include "KoratUILevelDataList.h"
#include "KoratUILevelTransition.generated.h"

USTRUCT(BlueprintType)
struct FKoratUILevelTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratUILevelDataList To;
    
    SS_API FKoratUILevelTransition();
};

