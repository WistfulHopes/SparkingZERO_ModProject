#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "KoratMissionDialogData.h"
#include "KoratRewardDataList.h"
#include "MissionListPanel.h"
#include "OnSSMissionCloseEventDelegate.h"
#include "OnSSMissionStampEventDelegate.h"
#include "OnSSMissionUpdateStampEventDelegate.h"
#include "SSMenuViewScroll.h"
#include "SSMissionUserDataSaveData.h"
#include "SSMenuMissionListUI.generated.h"

class USSMenuButton;
class USSRemoteButton;
class USSUiWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuMissionListUI : public USSMenuViewScroll {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* PanelBaseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* StampWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratMissionDataList> MissionIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMissionListPanel> MissionDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* StampSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratMissionDataList DecidePanelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* SelectMissionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectPanelNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBalkStamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBalkStampingMoveAutoScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NowStampingPanelNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SumRewardString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratRewardDataList> RewardDataIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextStampPanelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAlreadyScrolled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMissionStampEvent OnMissionStamped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMissionCloseEvent OnMissionClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMissionUpdateStampEvent OnPlayMissionStampAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StampWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* RightWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* LeftWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* TabSetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratMissionDialogData> MissionDialogDatas;
    
public:
    USSMenuMissionListUI();

protected:
    UFUNCTION(BlueprintCallable)
    void StampClearIcon(int32 InNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetPanelData(USSRemoteButton* InButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveRewardItem(FKoratMissionDataList& InMissionId, FSSMissionUserDataSaveData& InUserData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSelectPanel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFocusUnreadPanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void NotShowMissionPartsHideStampNote();
    
};

