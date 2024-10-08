#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuSubMenu.h"
#include "SSMainMenuModeMenuWCT.generated.h"

class USSMainMenuMythicalOrbButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuModeMenuWCT : public USSMainMenuSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMainMenuMythicalOrbButton*> MythicalOrbButtons;
    
public:
    USSMainMenuModeMenuWCT();

};

