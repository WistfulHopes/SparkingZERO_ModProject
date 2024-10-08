#pragma once
#include "CoreMinimal.h"
#include "KoratInteractMaterialDataRecord.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FKoratInteractMaterialDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialCustomPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    SS_API FKoratInteractMaterialDataRecord();
};

