#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "SSTrophyProgressMissionTypeDirtyInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSTrophyProgressMissionTypeDirtyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKoratMissionDataList> MissionIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> AdventureIFEventNames;
    
    SS_API FSSTrophyProgressMissionTypeDirtyInfo();
};

