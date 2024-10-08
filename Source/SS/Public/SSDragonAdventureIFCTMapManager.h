#pragma once
#include "CoreMinimal.h"
#include "EChangeRowType.h"
#include "SSMenuManager.h"
#include "SSDragonAdventureIFCTMapManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTMapManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChildWidgetName;
    
public:
    USSDragonAdventureIFCTMapManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRowChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitRow();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRowIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EChangeRowType GetChangeRowType() const;
    
};

