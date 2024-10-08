#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSDramaticBattleCutEditorFunctionOperationType.h"
#include "ESSDramaticBattleCutEditorFunctionParameterType.h"
#include "KoratBGMDataList.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.generated.h"

class ASSDramaticBattleCutEditorController;
class ASSDramaticBattleCutEditorUIWindowController;
class USSDramaticBattleCutEditorUIWindowItemFunctionBase;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorFunctionOperationType FunctionOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorFunctionParameterType FunctionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorUIWindowController* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorController* CutEditorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SelectListItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusedPreviewDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusedTimeLineDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList PlayingBGM;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionBase();

    UFUNCTION(BlueprintCallable)
    bool IsMatchFunction(ESSDramaticBattleCutEditorFunctionOperationType InFunctionOperation, ESSDramaticBattleCutEditorFunctionParameterType InFunctionParameter);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionBase* CreateAndInitializeBase(ASSDramaticBattleCutEditorUIWindowController* InUIController, ASSDramaticBattleCutEditorController* InCutEditorController);
    
};

