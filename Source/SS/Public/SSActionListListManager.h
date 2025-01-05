#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSActionListListManager.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSActionListListManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* FinishShowFocusedWidget;
    
public:
    USSActionListListManager();

};

