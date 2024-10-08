#pragma once
#include "CoreMinimal.h"
#include "ECharacterWarpAfterDirectionType.h"
#include "ECharacterWarpIndependRequestType.h"
#include "ECharacterWarpLinkType.h"
#include "ECharacterWarpResultAttachTimingType.h"
#include "SSCharacterWarpCommandInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterWarpCommandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECharacterWarpLinkType LinkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECharacterWarpAfterDirectionType AfterDirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECharacterWarpResultAttachTimingType AttachTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECharacterWarpIndependRequestType IndependRequest;
    
    SS_API FSSCharacterWarpCommandInfo();
};

