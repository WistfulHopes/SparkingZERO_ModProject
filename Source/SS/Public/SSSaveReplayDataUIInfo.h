#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SSReplayDataUIInfo.h"
#include "SSSaveReplayDataUIInfo.generated.h"

UCLASS(Blueprintable)
class SS_API USSSaveReplayDataUIInfo : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSReplayDataUIInfo UiInfo;
    
    USSSaveReplayDataUIInfo();

};

