#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataModelParameter.h"
#include "KoratCharacterDataCostumeParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataCostumeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataModelParameter FineModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataModelParameter> DamagedModels;
    
    SS_API FKoratCharacterDataCostumeParameter();
};

