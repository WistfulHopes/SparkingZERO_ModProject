#pragma once
#include "CoreMinimal.h"
#include "KoratGuardReactionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratGuardReactionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratGuardReactionDataList();
};

