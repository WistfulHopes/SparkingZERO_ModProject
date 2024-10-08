#pragma once
#include "CoreMinimal.h"
#include "KoratBlastForteDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastForteDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastForteDataList();
};

