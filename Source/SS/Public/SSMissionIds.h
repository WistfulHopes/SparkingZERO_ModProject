#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "SSMissionIds.generated.h"

USTRUCT(BlueprintType)
struct FSSMissionIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratMissionDataList> MissionIds;
    
    SS_API FSSMissionIds();
};

