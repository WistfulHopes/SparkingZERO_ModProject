#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMainMenuListMenuDataAssetRecord.h"
#include "SSMainMenuListMenuDataAsset.generated.h"

UCLASS(Blueprintable)
class USSMainMenuListMenuDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSMainMenuListMenuDataAssetRecord> Records;
    
    USSMainMenuListMenuDataAsset();

};

