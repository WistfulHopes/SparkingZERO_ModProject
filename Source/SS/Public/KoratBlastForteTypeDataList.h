#pragma once
#include "CoreMinimal.h"
#include "KoratBlastForteTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastForteTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastForteTypeDataList();
};

