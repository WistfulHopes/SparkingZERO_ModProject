#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSReplayDataUIInfo.h"
#include "SSReplayDataUIElement.generated.h"

UCLASS(Blueprintable)
class SS_API USSReplayDataUIElement : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSReplayDataUIInfo Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteMarker;
    
    USSReplayDataUIElement();

};

