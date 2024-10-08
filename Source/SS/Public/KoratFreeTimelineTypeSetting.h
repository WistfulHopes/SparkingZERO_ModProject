#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratFreeTimelineType.h"
#include "KoratFreeTimelineTypeSetting.generated.h"

USTRUCT(BlueprintType)
struct FKoratFreeTimelineTypeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOldFreeTimelineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineType FromOldFreeTimelineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FromLevelSequece;
    
    SS_API FKoratFreeTimelineTypeSetting();
};

