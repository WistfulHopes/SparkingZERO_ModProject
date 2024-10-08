#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowDialogDataType.h"
#include "ESSDramaticBattleCutEditorUIType.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "SSDramaticBatlleCutEditorSelectTargetUnit.h"
#include "SSDramaticBattleCutEditorInitialSelectUISelectHistory.h"
#include "SSDramaticBattleCutEditorUIBase.h"
#include "SSDramaticBattleCutEditorUISetupParameter.h"
#include "SSDramaticBattleCutEdtiorInitalSelectThumbnailAreaBackup.h"
#include "SSDramaticBattleCutEditorInitialSelectUIController.generated.h"

class USSCmnFilterDialog;
class USSDramaticBattleCutEditorInitialSelectImageSelectUi2D;
class USSDramaticBattleCutEditorInitialSelectUIWindow;
class USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager;
class USSDramaticBattleCutEditorInitialSelectUIWindowItemFunctionBase;

UCLASS(Blueprintable)
class ASSDramaticBattleCutEditorInitialSelectUIController : public AActor, public ISSDramaticBattleCutEditorUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIWindowDisplayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorInitialSelectUIWindow*> EditWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList RootSelectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorInitialSelectUISelectHistory> SelectHistorys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecidedSelectItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindowItemFunctionBase* UIWindowItemFunctionBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorInitialSelectUIWindowItemFunctionBase*> UIWindowItemFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMenuButtonSelectorLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuButtonSelectorVerticalFluctuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActionNameAlreadySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditCharacterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditSubtitleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlayBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveWindowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorInitialSelectUIWindowDialogDataType DialogDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager* GuideManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSCmnFilterDialog* SortFilterDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PictureFilterMenuTextLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectImageSelectUi2D* ImageSelectorUi2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectImageSelectUi2D* ImageSelectorUi3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBatlleCutEditorSelectTargetUnit> AllSelectTargetUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBatlleCutEditorSelectTargetUnit> FilterClippedTargetUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDramaticBattleCutEdtiorInitalSelectThumbnailAreaBackup ThumbnailFrameOriginal;
    
public:
    ASSDramaticBattleCutEditorInitialSelectUIController(const FObjectInitializer& ObjectInitializer);


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

