#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterBoneDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterBoneDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterBoneDataList();
};

