#pragma once
#include "CoreMinimal.h"
#include "KoratDamageReactionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDamageReactionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDamageReactionDataList();
};

