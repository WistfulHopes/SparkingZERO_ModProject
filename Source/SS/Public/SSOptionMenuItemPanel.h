#pragma once
#include "CoreMinimal.h"
#include "SSMenuItemPanel.h"
#include "SSOptionMenuItemPanel.generated.h"

class UTextLayoutWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSOptionMenuItemPanel : public USSMenuItemPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespondToDecideAction;
    
public:
    USSOptionMenuItemPanel();

protected:
    UFUNCTION(BlueprintCallable)
    void OnChildButtonDecided();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonContentDecided();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetContent() const;
    
};

