#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSDramaticBattleCutEditorUIType.h"
#include "KoratBGMDataList.h"
#include "KoratDramaticCutDataRecord.h"
#include "SSDramaticBattleCutEditorUIBase.h"
#include "SSDramaticBattleCutEditorUISetupParameter.h"
#include "SSMenuSceneController.h"
#include "SSDramaticBattleNewCutEditorController.generated.h"

class AActor;
class APostProcessVolume;
class ASSDramaticBattleNewCutEditorInitialSelectUIController;
class UMaterialInterface;
class USSDramaticBattleNewCutEditorUIWindow;
class USSDramaticEditImageSaveData;
class USSMenuButton;
class USSMenuGeneralDialog;
class USSMenuManager;
class USSMenuViewScroll;
class USSOperationGuideSet;
class USSRemoteButton;
class USSSortFilterDialog;
class UTexture2D;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class ASSDramaticBattleNewCutEditorController : public ASSMenuSceneController, public ISSDramaticBattleCutEditorUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> CutEditorUIControllerClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> CutEditorPreviewPostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList DefaultBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleNewCutEditorUIWindow* FoldEditWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* TextListWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* MultiLineTextListWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* BgmListWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSortFilterDialog* SortFilterDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* CharaLayoutWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* CaptureTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CutDefaultTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> UIControllerActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleNewCutEditorInitialSelectUIController* InitialSelectUIActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticCutDataRecord StoredEditCutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayedPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticEditImageSaveData*> ThumbnailImageSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartSaveThumbnailCaptureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostProcessVolume* PreviwePostProcessActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelAddLevelLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelTransitionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> LoadUIControllerClasses;
    
public:
    ASSDramaticBattleNewCutEditorController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ChangeTextSubWindowData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFocusInCharaLayoutSubWindowTopButton(USSMenuButton* InHitButton);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFocusInCharaLayoutSubWindowBottomButton(USSMenuButton* InHitButton);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBgmSubWindowData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void Setup(const FSSDramaticBattleCutEditorUISetupParameter& InParameter) override PURE_VIRTUAL(Setup,);
    
    UFUNCTION()
    void Initialize() override PURE_VIRTUAL(Initialize,);
    
    UFUNCTION()
    ESSDramaticBattleCutEditorUIType GetUIType() override PURE_VIRTUAL(GetUIType, return ESSDramaticBattleCutEditorUIType::None;);
    
    UFUNCTION()
    void Finalize() override PURE_VIRTUAL(Finalize,);
    
};

