#pragma once
#include "CoreMinimal.h"
#include "KoratChangeCharacterActionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratChangeCharacterActionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratChangeCharacterActionDataList();
};

