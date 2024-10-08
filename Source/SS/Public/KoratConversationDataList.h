#pragma once
#include "CoreMinimal.h"
#include "KoratConversationDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratConversationDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratConversationDataList();
};

