#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditSentenceTextDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditSentenceTextDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditSentenceTextDataList();
};

