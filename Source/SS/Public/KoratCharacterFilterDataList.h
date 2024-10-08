#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterFilterDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterFilterDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterFilterDataList();
};

