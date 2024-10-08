#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSDramaticBattleCutEditorUIType.h"
#include "ESSDramaticBattleCutEditorUIWindowDialogDataType.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "SSDramaticBattleCutEditorUIBase.h"
#include "SSDramaticBattleCutEditorUISetupParameter.h"
#include "SSDramaticBattleCutEditorUIWindowSelectHistory.h"
#include "SSDramaticBattleCutEditorUIWindowController.generated.h"

class USSDramaticBattleCutEditorGuideManager;
class USSDramaticBattleCutEditorUIWindow;
class USSDramaticBattleCutEditorUIWindowItemFunctionBase;
class USSDramaticBattleCutEditorUIWindowPreviewPanel;
class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class ASSDramaticBattleCutEditorUIWindowController : public AActor, public ISSDramaticBattleCutEditorUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIWindowDisplayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorUIWindow*> EditWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList RootSelectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorUIWindowSelectHistory> SelectHistorys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecidedSelectItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindowItemFunctionBase* UIWindowItemFunctionBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorUIWindowItemFunctionBase*> UIWindowItemFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMenuButtonSelectorLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuButtonSelectorVerticalFluctuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindowPreviewPanel* PreviewPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActionNameAlreadySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditCharacterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditSubtitleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRemoveSubtitleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlayBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorUIWindowDialogDataType DialogDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorGuideManager* GuideManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestPreview;
    
public:
    ASSDramaticBattleCutEditorUIWindowController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void Setup(const FSSDramaticBattleCutEditorUISetupParameter& InParameter) override PURE_VIRTUAL(Setup,);
    
    UFUNCTION()
    void Initialize() override PURE_VIRTUAL(Initialize,);
    
    UFUNCTION()
    ESSDramaticBattleCutEditorUIType GetUIType() override PURE_VIRTUAL(GetUIType, return ESSDramaticBattleCutEditorUIType::None;);
    
    UFUNCTION()
    void Finalize() override PURE_VIRTUAL(Finalize,);
    
};

