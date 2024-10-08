#pragma once
#include "CoreMinimal.h"
#include "KoratSpeciesDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratSpeciesDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    SS_API FKoratSpeciesDataAssetRecord();
};

