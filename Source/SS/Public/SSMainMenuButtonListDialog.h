#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuWidgetFromList.h"
#include "SSMainMenuButtonListDialog.generated.h"

class USSButtonListWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuButtonListDialog : public USSMainMenuWidgetFromList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSButtonListWidget* ButtonListWidget;
    
public:
    USSMainMenuButtonListDialog();

};

