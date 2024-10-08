#pragma once
#include "CoreMinimal.h"
#include "EKortaDramticMissionCategory.h"
#include "KoratDramaticMission.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKortaDramticMissionCategory DramaticMissionCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DramaticMissionClearNum;
    
    SS_API FKoratDramaticMission();
};

