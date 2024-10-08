#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSDramaticBattleCutEditorFunctionOperationType.h"
#include "ESSDramaticBattleCutEditorFunctionParameterType.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowItemFunctionBase.generated.h"

class ASSDramaticBattleCutEditorInitialSelectUIController;
class USSDramaticBattleCutEditorInitialSelectUIWindowItemFunctionBase;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorInitialSelectUIWindowItemFunctionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorFunctionOperationType FunctionOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorFunctionParameterType FunctionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorInitialSelectUIController* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SelectListItems;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindowItemFunctionBase();

    UFUNCTION(BlueprintCallable)
    bool IsMatchFunction(ESSDramaticBattleCutEditorFunctionOperationType InFunctionOperation, ESSDramaticBattleCutEditorFunctionParameterType InFunctionParameter);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(ESSDramaticBattleCutEditorFunctionOperationType InFunctionOperation, ESSDramaticBattleCutEditorFunctionParameterType InFunctionParameter, ASSDramaticBattleCutEditorInitialSelectUIController* InUIController);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorInitialSelectUIWindowItemFunctionBase* CreateAndInitializeBase(ASSDramaticBattleCutEditorInitialSelectUIController* InUIController);
    
};

