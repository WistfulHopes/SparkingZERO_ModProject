#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoSelectorParam.h"
#include "AtomCueInfoTrackParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoTrackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomCueInfoSelectorParam Selector;
    
    CRIWARERUNTIME_API FAtomCueInfoTrackParam();
};

