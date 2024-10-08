#pragma once
#include "CoreMinimal.h"
#include "KoratInteractMaterialDataRecord.h"
#include "KoratInteractMultiDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratInteractMultiDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratInteractMaterialDataRecord> MaterialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotUseDefaultAsset;
    
    SS_API FKoratInteractMultiDataRecord();
};

