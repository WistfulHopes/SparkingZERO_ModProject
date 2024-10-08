#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePracticsMenuDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattlePracticsMenuDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattlePracticsMenuDataList();
};

