#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoBusSendParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoBusSendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    CRIWARERUNTIME_API FAtomCueInfoBusSendParam();
};

