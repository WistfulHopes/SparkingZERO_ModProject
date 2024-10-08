#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnSSBuiltInMenuDecidedEventDelegate.h"
#include "SSBuiltInMenuItem.h"
#include "SSBuiltInMenu.generated.h"

class USSMenuButton;
class UWidget;

UCLASS(Blueprintable)
class USSBuiltInMenu : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSBuiltInMenuDecidedEvent OnDecided;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LastFocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBuiltInMenuItem> EntryItems;
    
public:
    USSBuiltInMenu();

private:
    UFUNCTION(BlueprintCallable)
    void NewDecideButton(USSMenuButton* MenuButton);
    
    UFUNCTION(BlueprintCallable)
    void FocusedButton();
    
    UFUNCTION(BlueprintCallable)
    void DecideButton();
    
};

