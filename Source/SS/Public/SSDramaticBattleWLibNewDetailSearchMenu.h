#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleWLibNewDetailSearchMenu.generated.h"

class USSMenuButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleWLibNewDetailSearchMenu : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NoneTexture;
    
public:
    USSDramaticBattleWLibNewDetailSearchMenu();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex);
    
};

