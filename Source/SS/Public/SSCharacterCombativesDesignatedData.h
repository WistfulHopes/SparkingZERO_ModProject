#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSCharacterCombativesDesignatedData.generated.h"

class USSCombativesDataAsset;
class USSCombativesSubDataAsset;
class USSCombativesVisualDataAsset;

USTRUCT(BlueprintType)
struct FSSCharacterCombativesDesignatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKoratCharacterDataList> Opponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesDataAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesSubDataAsset* SubParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCombativesVisualDataAsset* Visual;
    
    SS_API FSSCharacterCombativesDesignatedData();
};

