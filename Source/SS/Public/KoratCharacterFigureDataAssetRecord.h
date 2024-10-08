#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterFigureDataAssetRecord.generated.h"

class UKoratCharacterCombinationDataAsset;
class USSCharacterUiDataAsset;
class USSEffectFigureTransformDataAsset;
class USSFigureMLSDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterFigureDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSFigureMLSDataAsset* MontageLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEffectFigureTransformDataAsset* FigureTransformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterUiDataAsset* FigureDefaultUiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterCombinationDataAsset* FigureCharacterCombination;
    
    SS_API FKoratCharacterFigureDataAssetRecord();
};

