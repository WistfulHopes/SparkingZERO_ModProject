#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindow.generated.h"

class ASSDramaticBattleCutEditorInitialSelectUIController;
class USSDramaticBattleCutEditorInitialSelectUIWindowButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorInitialSelectUIWindow : public USSMenuViewScroll {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawPositionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawPositionStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorInitialSelectUIWindowButton*> ModeSelectButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorInitialSelectUIController* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FocusedSelectButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorInitialSelectUIWindowButton*> SelectButtonWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList ListTemplateItemDataList;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindow();

    UFUNCTION(BlueprintCallable)
    void OnFilterChangedRight();
    
    UFUNCTION(BlueprintCallable)
    void OnFilterChangedLeft();
    
};

