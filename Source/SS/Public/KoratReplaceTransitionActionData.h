#pragma once
#include "CoreMinimal.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratReplaceTransitionActionData.generated.h"

USTRUCT(BlueprintType)
struct FKoratReplaceTransitionActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratReplaceAnimationDataList ReplaceAnimation;
    
    SS_API FKoratReplaceTransitionActionData();
};

