#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSKeyInputType.h"
#include "KoratButtonGuideDataList.h"
#include "SSDramaticBattleCutEditorGuideManager.generated.h"

class AActor;
class USSDramaticBattleCutEditorGuideManager;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorGuideManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList CurrentButtonGuideDataList;
    
public:
    USSDramaticBattleCutEditorGuideManager();

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetZOrder(int32 InZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentData();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinished();
    
    UFUNCTION(BlueprintCallable)
    ESSKeyInputType GetResultButton() const;
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorGuideManager* CreateAndInitialize(AActor* InUIController);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearResultButton();
    
};

