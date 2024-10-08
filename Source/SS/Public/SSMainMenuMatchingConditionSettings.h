#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuSettingsWidgetBase.h"
#include "SSMainMenuMatchingConditionSettings.generated.h"

class USSMainMenuUserInfoWindow;
class USSPlayerMatchNetworkManager;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuMatchingConditionSettings : public USSMainMenuSettingsWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMainMenuUserInfoWindow* UserInfoWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPlayerMatchNetworkManager* NetworkManager;
    
public:
    USSMainMenuMatchingConditionSettings();

};

