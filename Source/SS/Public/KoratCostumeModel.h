#pragma once
#include "CoreMinimal.h"
#include "KoratCostumeModel.generated.h"

USTRUCT(BlueprintType)
struct FKoratCostumeModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CostumeModelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeDamageLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeScratchLv;
    
    SS_API FKoratCostumeModel();
};

