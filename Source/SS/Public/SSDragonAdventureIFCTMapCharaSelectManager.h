#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDragonAdventureIFCTMapCharaSelectManager.generated.h"

class USSBuiltInMenu;

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTMapCharaSelectManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSDragonAdventureIFCTMapCharaSelectManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSelect();
    
};

