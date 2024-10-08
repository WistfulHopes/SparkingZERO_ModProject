#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "SSMenuManager.h"
#include "SSMissionDetail.generated.h"

class USSUiWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USSMissionDetail : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* DetailBaseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiWidget* StampWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FindWidgetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FindPanelWidgetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FindPanelWidgetRewardWaitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FindPanelWidgetNomalAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FindStampWidgetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FindStampWidgetNormalAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratMissionDataList MissionId;
    
public:
    USSMissionDetail();

};

