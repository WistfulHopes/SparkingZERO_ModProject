#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSEventSceneCutsceneCompileDescriptionDE.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleNewCutEditorUIWindow.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleNewCutEditorUIWindow : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneCutsceneCompileDescriptionDE TestCutSceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> TestCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlowStartOffText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NumCharacterText;
    
    USSDramaticBattleNewCutEditorUIWindow();

    UFUNCTION(BlueprintCallable)
    void SetTestCutSetting(bool bIsTest);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ButtonFocusChange(USSMenuButton* InHitButton);
    
};

