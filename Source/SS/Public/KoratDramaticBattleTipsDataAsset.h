#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleTipsDataAssetRecord.h"
#include "KoratDramaticBattleTipsDataList.h"
#include "MutualDataAsset.h"
#include "KoratDramaticBattleTipsDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API UKoratDramaticBattleTipsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticBattleTipsDataAssetRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleTipsDataList> TipsList;
    
public:
    UKoratDramaticBattleTipsDataAsset();

protected:
    UFUNCTION(BlueprintCallable)
    void SortTipsListData();
    
};

