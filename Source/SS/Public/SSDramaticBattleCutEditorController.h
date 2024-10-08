#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSDramaticBattleCutEditorCutType.h"
#include "ESSDramaticBattleCutEditorUIType.h"
#include "KoratCharacterDataList.h"
#include "KoratMapDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSDramaticBattleCutEditorUIBase.h"
#include "SSDramaticBattleCutEditorUISetupParameter.h"
#include "SSMenuSceneController.h"
#include "SSDramaticBattleCutEditorController.generated.h"

class AActor;
class USSDramaticEditImageSaveData;

UCLASS(Blueprintable)
class ASSDramaticBattleCutEditorController : public ASSMenuSceneController, public ISSDramaticBattleCutEditorUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> CutEditorUIControllerClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> UIControllerActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayedPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticEditImageSaveData*> ThumbnailImageSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartSaveThumbnailCaptureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelAddLevelLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelTransitionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> LoadUIControllerClasses;
    
public:
    ASSDramaticBattleCutEditorController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetMap(FKoratMapDataList InMapDataList);
    
    UFUNCTION(BlueprintCallable)
    static void SetEditCutDataId(FName InCutDataId, bool bInCreateNew);
    
    UFUNCTION(BlueprintCallable)
    static void SetCutsceneCutType(ESSDramaticBattleCutEditorCutType InCutType);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterStartList(TArray<FKoratPlayerStartDataList>& InCharacterStartList);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterList(TArray<FKoratCharacterDataList>& InCharacterList);
    
    UFUNCTION(BlueprintCallable)
    static void GetCharacterList(TArray<FKoratCharacterDataList>& OutCharacterList);
    

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

