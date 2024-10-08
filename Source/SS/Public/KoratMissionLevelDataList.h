#pragma once
#include "CoreMinimal.h"
#include "KoratMissionLevelDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMissionLevelDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMissionLevelDataList();
};

