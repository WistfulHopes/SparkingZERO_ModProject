#pragma once
#include "CoreMinimal.h"
#include "KoratMythicalOrbDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMythicalOrbDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMythicalOrbDataList();
};

