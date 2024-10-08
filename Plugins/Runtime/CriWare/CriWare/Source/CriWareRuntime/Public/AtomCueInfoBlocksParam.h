#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoBlocksParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoBlocksParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Length;
    
    CRIWARERUNTIME_API FAtomCueInfoBlocksParam();
};

