#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionFilter.h"
#include "ESSMissionType.h"
#include "MutualDataAsset.h"
#include "SSMissionFilterDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSMissionFilterDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuMissionFilter MissionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSMissionType> MissionClearTypes;
    
    USSMissionFilterDataAssetRecord();

};

