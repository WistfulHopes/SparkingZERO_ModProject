#pragma once
#include "CoreMinimal.h"
#include "SSUserWidget.h"
#include "SSBattleDebugWidget.generated.h"

class ASSBattleDebugDrawActor;

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSBattleDebugWidget : public USSUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleDebugDrawActor* BattleDebugDrawActor;
    
    USSBattleDebugWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrollUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrollDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageDown();
    
};

