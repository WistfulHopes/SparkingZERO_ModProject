#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditBlankTextDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditBlankTextDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditBlankTextDataList();
};

