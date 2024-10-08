#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "KoratModeMissionList.generated.h"

USTRUCT(BlueprintType)
struct FKoratModeMissionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMissionDataList> MissionList;
    
    SS_API FKoratModeMissionList();
};

