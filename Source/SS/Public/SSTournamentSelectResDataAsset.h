#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSTournamentSelectResDataAssetRecord.h"
#include "SSTournamentSelectResDataAsset.generated.h"

UCLASS(Blueprintable)
class USSTournamentSelectResDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSTournamentSelectResDataAssetRecord> Records;
    
public:
    USSTournamentSelectResDataAsset();

};

