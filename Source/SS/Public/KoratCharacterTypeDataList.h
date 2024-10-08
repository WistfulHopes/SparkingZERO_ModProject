#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterTypeDataList();
};

