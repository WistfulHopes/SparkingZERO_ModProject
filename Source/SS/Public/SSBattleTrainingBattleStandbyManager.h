#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSBattleTrainingBattleStandbyManager.generated.h"

class USSMenuButton;
class USSMenuButtonGuideHoldManager;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleStandbyManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonGuideHoldManager* GuideButtonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonGuideHoldManager* GuideButtonSetFooter;
    
public:
    USSBattleTrainingBattleStandbyManager();

    UFUNCTION(BlueprintCallable)
    void SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

