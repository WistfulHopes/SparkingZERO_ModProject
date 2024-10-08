#pragma once
#include "CoreMinimal.h"
#include "AtomAsrRackConfig.generated.h"

USTRUCT(BlueprintType)
struct FAtomAsrRackConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundRendererType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOutputPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    CRIWARERUNTIME_API FAtomAsrRackConfig();
};

