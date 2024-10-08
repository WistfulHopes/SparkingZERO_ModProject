#pragma once
#include "CoreMinimal.h"
#include "KoratTutorialDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratTutorialDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratTutorialDataList();
};

