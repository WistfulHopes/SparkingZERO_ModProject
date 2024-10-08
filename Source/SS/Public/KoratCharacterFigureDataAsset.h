#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterFigureDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratCharacterFigureDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratCharacterFigureDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterFigureDataAssetRecord> Records;
    
public:
    UKoratCharacterFigureDataAsset();

};

