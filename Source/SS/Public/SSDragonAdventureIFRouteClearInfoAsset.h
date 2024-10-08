#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFRouteClearInfoAssetRecord.h"
#include "SSDragonAdventureIFRouteClearInfoAsset.generated.h"

UCLASS(Blueprintable)
class USSDragonAdventureIFRouteClearInfoAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDragonAdventureIFRouteClearInfoAssetRecord> Records;
    
    USSDragonAdventureIFRouteClearInfoAsset();

};

