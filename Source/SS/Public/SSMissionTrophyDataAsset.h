#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMissionTrophyDataAsset.generated.h"

class USSMissionTrophyDataAssetRecord;

UCLASS(Blueprintable)
class USSMissionTrophyDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSMissionTrophyDataAssetRecord*> Records;
    
public:
    USSMissionTrophyDataAsset();

};

