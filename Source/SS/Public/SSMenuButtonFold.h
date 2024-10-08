#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSMenuButtonFold.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonFold : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> FoldWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> CurrentFoldWidgets;
    
public:
    USSMenuButtonFold();

};

