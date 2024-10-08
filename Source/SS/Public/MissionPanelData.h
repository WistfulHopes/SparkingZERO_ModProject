#pragma once
#include "CoreMinimal.h"
#include "MissionPanelData.generated.h"

class USSUiWidget;
class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FMissionPanelData {
    GENERATED_BODY()
public:
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
    
    SS_API FMissionPanelData();
};

