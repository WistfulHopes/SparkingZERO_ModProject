#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratFreeTimelineTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratFreeTimelineTypeDataList();
};

