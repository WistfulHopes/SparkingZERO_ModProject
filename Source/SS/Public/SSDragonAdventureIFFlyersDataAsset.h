#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFFlyersDataAsset.generated.h"

class USSPaperTheaterDataAsset;

UCLASS(Blueprintable)
class USSDragonAdventureIFFlyersDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPaperTheaterDataAsset* PaperTheaterData;
    
    USSDragonAdventureIFFlyersDataAsset();

};

