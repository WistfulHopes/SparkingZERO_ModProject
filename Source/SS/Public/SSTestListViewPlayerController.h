#pragma once
#include "CoreMinimal.h"
#include "SSMenuPlayerController.h"
#include "SSTestListViewPlayerController.generated.h"

class UDataAsset;
class UObject;
class USSUiWidget;
class UUserWidget;

UCLASS(Blueprintable)
class ASSTestListViewPlayerController : public ASSMenuPlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* DataAsset1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* DataAsset2;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* TopWidget;
    
public:
    ASSTestListViewPlayerController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void EntryInitializedItemOriginal(UObject* InItem, UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void EntryInitializedItem(UObject* InItem, UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTable2();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTable1();
    
    UFUNCTION(BlueprintCallable)
    void ButtonDecidedOriginal();
    
    UFUNCTION(BlueprintCallable)
    void ButtonDecided();
    
};

