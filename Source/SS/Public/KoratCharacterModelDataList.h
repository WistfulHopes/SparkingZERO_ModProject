#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterModelDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterModelDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterModelDataList();
};

