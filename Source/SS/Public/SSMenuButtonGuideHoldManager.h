#pragma once
#include "CoreMinimal.h"
#include "SSBuiltInMenuItem.h"
#include "SSMenuManager.h"
#include "SSMenuButtonGuideHoldManager.generated.h"

class USSBuiltInMenu;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonGuideHoldManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSMenuButtonGuideHoldManager();

private:
    UFUNCTION(BlueprintCallable)
    void DecideButton(int32 InIndex, const FSSBuiltInMenuItem& InItem);
    
};

