#pragma once
#include "CoreMinimal.h"
#include "KoratLungeEndDamageDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratLungeEndDamageDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratLungeEndDamageDataList();
};

