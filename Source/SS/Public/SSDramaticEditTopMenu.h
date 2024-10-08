#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticEditTopMenu.generated.h"

class USSDramticEditTopInfoUi;
class USSMenuButton;
class USSRemoteButton;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditTopMenu : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> MenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSRemoteButton*> RemoteButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramticEditTopInfoUi* EditTopInfoUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BeforeFocusedWidget;
    
public:
    USSDramaticEditTopMenu();

    UFUNCTION(BlueprintCallable)
    void SelectButtonMode();
    
};

