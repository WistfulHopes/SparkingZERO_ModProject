#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class USSSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestLoadingEnable;
    
    USSSettings();

};

