#pragma once
#include "CoreMinimal.h"
#include "KoratSpeciesDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratSpeciesDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratSpeciesDataList();
};

