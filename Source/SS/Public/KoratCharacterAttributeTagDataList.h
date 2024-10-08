#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterAttributeTagDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterAttributeTagDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterAttributeTagDataList();
};

