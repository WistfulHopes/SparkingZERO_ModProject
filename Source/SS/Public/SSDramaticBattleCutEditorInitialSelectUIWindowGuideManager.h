#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSKeyInputType.h"
#include "KoratButtonGuideDataList.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowGuideManager.generated.h"

class ASSDramaticBattleCutEditorInitialSelectUIController;
class USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorInitialSelectUIController* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList CurrentButtonGuideDataList;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager();

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentData();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinished();
    
    UFUNCTION(BlueprintCallable)
    ESSKeyInputType GetResultButton() const;
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager* CreateAndInitialize(ASSDramaticBattleCutEditorInitialSelectUIController* InUIController);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearResultButton();
    
};

