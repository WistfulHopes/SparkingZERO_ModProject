#pragma once
#include "CoreMinimal.h"
#include "KoratBuffData.generated.h"

class UKoratBuffPhaseDataAsset;

USTRUCT(BlueprintType)
struct FKoratBuffData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKoratBuffPhaseDataAsset*> PhaseBuffList;
    
    SS_API FKoratBuffData();
};

