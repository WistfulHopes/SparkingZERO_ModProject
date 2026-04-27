#pragma once
#include "CoreMinimal.h"
#include "SSAiPlayerData.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct SS_API FSSAiPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UBehaviorTree*> BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBehaviorTree*> UnoptimizedSubtree;
    
    FSSAiPlayerData();
};

