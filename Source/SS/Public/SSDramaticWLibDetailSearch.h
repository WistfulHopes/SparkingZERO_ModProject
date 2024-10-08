#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDramaticWLibDetailSearch.generated.h"

class ASSDramaticWLibSearchCharacterSelect;
class USSDramaticBattleWLibNewDetailSearchMenu;
class USSGuideTextWidget;
class USSMenuButton;
class USSMenuHoldButtonSet;
class USSMenuViewScroll;
class USSOperationGuideSet;
class USSRemoteButton;

UCLASS(Blueprintable)
class ASSDramaticWLibDetailSearch : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuHoldButtonSet* SearchButtonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleWLibNewDetailSearchMenu* DetailSearchMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* StageSelectSubWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* CharaSettingSubWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSGuideTextWidget* GuideTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticWLibSearchCharacterSelect* CharaSelectActor;
    
public:
    ASSDramaticWLibDetailSearch(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ChangeStageListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaSettingListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

