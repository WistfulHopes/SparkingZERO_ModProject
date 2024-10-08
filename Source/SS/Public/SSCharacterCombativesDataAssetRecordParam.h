#pragma once
#include "CoreMinimal.h"
#include "KoratCombativesKeyDataList.h"
#include "SSCharacterCombativesDataAssetRecordParamAdditional.h"
#include "SSCharacterCombativesDataAssetRecordParam.generated.h"

class USSCombativesDataAsset;
class USSCombativesSubDataAsset;
class USSCombativesVisualDataAsset;

USTRUCT(BlueprintType)
struct FSSCharacterCombativesDataAssetRecordParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesDataAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesSubDataAsset* SubParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesVisualDataAsset* Visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCombativesKeyDataList, FSSCharacterCombativesDataAssetRecordParamAdditional> AdditionalCombatives;
    
    SS_API FSSCharacterCombativesDataAssetRecordParam();
};

