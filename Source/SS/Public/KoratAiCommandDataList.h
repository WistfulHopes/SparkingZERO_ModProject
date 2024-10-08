#pragma once
#include "CoreMinimal.h"
#include "KoratAiCommandDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAiCommandDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAiCommandDataList();
};

