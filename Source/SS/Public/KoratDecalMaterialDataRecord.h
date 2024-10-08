#pragma once
#include "CoreMinimal.h"
#include "KoratDecalMaterialDataRecord.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FKoratDecalMaterialDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material_Small;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material_Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material_Learge;
    
    SS_API FKoratDecalMaterialDataRecord();
};

