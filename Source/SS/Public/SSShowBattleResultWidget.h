#pragma once
#include "CoreMinimal.h"
#include "EBattleWinLose.h"
#include "SSUiWidget.h"
#include "SSShowBattleResultWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSShowBattleResultWidget : public USSUiWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBattleWinLose, UTexture2D*> ResultTexture;
    
    USSShowBattleResultWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleResultWinShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleResultWinHidde();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleResultLoseShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleResultLoseHidde();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleResultDrawShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleResultDrawHidde();
    
};

