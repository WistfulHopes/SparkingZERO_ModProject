#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuSubMenu.h"
#include "SSMainMenuSubModeMenu.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuSubModeMenu : public USSMainMenuSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
public:
    USSMainMenuSubModeMenu();

};

