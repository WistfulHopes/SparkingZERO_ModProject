#pragma once
#include "CoreMinimal.h"
#include "KoratButtonGuideDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratButtonGuideDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratButtonGuideDataList();
};

