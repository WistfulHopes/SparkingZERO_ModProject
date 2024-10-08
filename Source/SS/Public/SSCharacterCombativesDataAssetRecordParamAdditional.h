#pragma once
#include "CoreMinimal.h"
#include "SSCharacterCombativesDesignatedData.h"
#include "SSCharacterCombativesDataAssetRecordParamAdditional.generated.h"

class USSCombativesDataAsset;
class USSCombativesSubDataAsset;
class USSCombativesVisualDataAsset;

USTRUCT(BlueprintType)
struct FSSCharacterCombativesDataAssetRecordParamAdditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterCombativesDesignatedData> DesignatedDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesDataAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesSubDataAsset* SubParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesVisualDataAsset* Visual;
    
    SS_API FSSCharacterCombativesDataAssetRecordParamAdditional();
};

