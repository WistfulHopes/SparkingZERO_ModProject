#pragma once
#include "CoreMinimal.h"
#include "DisplayGaugeSetting.h"
#include "SSHUDWidget.h"
#include "SSGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSGauge : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDisplayGaugeSetting> DisplayGaugeSettings;
    
public:
    USSGauge();

};

