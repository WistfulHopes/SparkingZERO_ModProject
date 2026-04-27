#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSModeHUNManager.generated.h"

UCLASS(Blueprintable)
class SS_API USSModeHUNManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NowPlayingBattleId;
    
    USSModeHUNManager();

};

