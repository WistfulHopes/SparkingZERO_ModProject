#pragma once
#include "CoreMinimal.h"
#include "KoratAiBlastTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAiBlastTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAiBlastTypeDataList();
};

