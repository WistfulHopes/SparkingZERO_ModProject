#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuSubMenu.h"
#include "SSMainMenuSubModeMenuExtra.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuSubModeMenuExtra : public USSMainMenuSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
public:
    USSMainMenuSubModeMenuExtra();

};

