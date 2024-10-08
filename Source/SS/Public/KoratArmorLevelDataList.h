#pragma once
#include "CoreMinimal.h"
#include "KoratArmorLevelDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratArmorLevelDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratArmorLevelDataList();
};

