#pragma once
#include "CoreMinimal.h"
#include "Misc/Guid.h"
#include "SSPresentBoxSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSPresentBoxSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> GrantedItemIdArray;
    
    FSSPresentBoxSaveData();
};

