#pragma once
#include "CoreMinimal.h"
#include "SSNotifyActionCameraTargetSpawnParameters.generated.h"

class ASSNotifyActionCameraTargetActor;

USTRUCT(BlueprintType)
struct FSSNotifyActionCameraTargetSpawnParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaySide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSNotifyActionCameraTargetActor> SpawnActor;
    
    SS_API FSSNotifyActionCameraTargetSpawnParameters();
};

