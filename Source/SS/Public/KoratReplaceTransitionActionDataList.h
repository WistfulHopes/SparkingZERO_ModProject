#pragma once
#include "CoreMinimal.h"
#include "KoratReplaceTransitionActionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratReplaceTransitionActionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratReplaceTransitionActionDataList();
};

