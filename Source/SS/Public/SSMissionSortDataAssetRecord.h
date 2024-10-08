#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionSort.h"
#include "MutualDataAsset.h"
#include "SSMissionSortDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSMissionSortDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuMissionSort MissionSort;
    
    USSMissionSortDataAssetRecord();

};

