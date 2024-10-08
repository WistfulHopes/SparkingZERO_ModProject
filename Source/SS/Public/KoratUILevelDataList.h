#pragma once
#include "CoreMinimal.h"
#include "KoratUILevelDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratUILevelDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratUILevelDataList();
};

