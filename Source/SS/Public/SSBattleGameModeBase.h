#pragma once
#include "CoreMinimal.h"
#include "OnCreateControllerDelegate.h"
#include "SSGameModeBase.h"
#include "SSBattleGameModeBase.generated.h"

class APlayerController;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class ASSBattleGameModeBase : public ASSGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSplitScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLaboDevelop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> PreloadingWidgetAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateController OnCreateController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> GeneratedPlayerController;
    
public:
    ASSBattleGameModeBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTransitionKoratPreReset();
    
};

