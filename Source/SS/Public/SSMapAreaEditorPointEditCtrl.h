#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EWarpPointType.h"
#include "SSMapAreaEditorPointEditCtrl.generated.h"

class AActor;
class ASSMapAreaGuideEditSphere;
class UCheckBox;
class UComboBoxString;
class UTextBlock;
class UWorld;

UCLASS(Blueprintable)
class USSMapAreaEditorPointEditCtrl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> createdPlyerStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> createdNoramlLocatorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> createdTraceLocatorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCheckBox*> targetCheckBoxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> pointPosDispBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> entryCountDispBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpPointType activeEditType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSMapAreaGuideEditSphere* pointCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* connectedPointCursorActor;
    
    USSMapAreaEditorPointEditCtrl();

    UFUNCTION(BlueprintCallable)
    void UpdateListEntryNumIndicator();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEditActorPositionByCursor();
    
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void StartPointEdit();
    
    UFUNCTION(BlueprintCallable)
    void SetupResources(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatedTraceLocatorList(const TArray<AActor*>& traceLocatorList);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatedPlayerStartList(const TArray<AActor*>& playerStartList);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatedNormalLocatorList(const TArray<AActor*>& normalLocatorList);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPointEditUI();
    
    UFUNCTION(BlueprintCallable)
    bool IsRemoveablePoint(EWarpPointType pointType, const FString& pointName);
    
    UFUNCTION(BlueprintCallable)
    bool IsCreatablePoint(EWarpPointType pointType, const FString& pointName);
    
    UFUNCTION(BlueprintCallable)
    UComboBoxString* GetSelector();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPointCursor();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetPlayerStartList();
    
    UFUNCTION(BlueprintCallable)
    EWarpPointType GetActiveEditPointType();
    
    UFUNCTION(BlueprintCallable)
    void Finish(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    bool DeletePoint(UWorld* World, const FString& pointName, EWarpPointType pointType);
    
    UFUNCTION(BlueprintCallable)
    void ConnectPointEditActor(AActor* editActor);
    
    UFUNCTION(BlueprintCallable)
    void Connect(const TArray<UCheckBox*>& targetCheckBoxs, UComboBoxString* selectorWidget, const TArray<UTextBlock*>& posDispBlocks, const TArray<UTextBlock*>& countDispBlocks);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActiveEditPointCategory(UCheckBox* operatedWidget);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewPoint(UWorld* World, const FString& pointName, EWarpPointType pointType, FVector appearPoint);
    
};

