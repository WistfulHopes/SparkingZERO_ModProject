#pragma once
#include "CoreMinimal.h"
#include "ESSTimeLineUiTrackColorType.h"
#include "SSMenuManager.h"
#include "SSTimeLineData.h"
#include "SSTimeLinePlaybackBar.h"
#include "SSDramaticTimeLineUi.generated.h"

class USSTimeLineTimeSlider;
class USSTimeLineTrackViewPanel;
class USSTimeLineViewPanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticTimeLineUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TimeLineViewPanelWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TimeLineTrackViewPanelWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TimeSliderWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineData TimeLineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTimeLineViewPanel* TimeLineViewPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTimeLineTrackViewPanel* TimeLineTrackViewPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTimeLineTimeSlider* TimeSliderWidget;
    
public:
    USSDramaticTimeLineUi();

    UFUNCTION(BlueprintCallable)
    void SetStartTransitionLength(float InLengthSec);
    
    UFUNCTION(BlueprintCallable)
    void SetSlowStart(float InStartSec);
    
    UFUNCTION(BlueprintCallable)
    void SetSlowSpeed(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSlowEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSelect(int32 InKeyId, bool bIsSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleLevel(int32 InScaleLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayHeadVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayHeadPosition(float InSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetPanelFocus();
    
    UFUNCTION(BlueprintCallable)
    bool SetKeyFocus(int32 InKeyId);
    
    UFUNCTION(BlueprintCallable)
    bool SetKey(int32 InKeyId, const FText& InName, float InStartSec, float InLengthSec, bool bIsSlowStretch);
    
    UFUNCTION(BlueprintCallable)
    void SetEndLineTime(float InSecond);
    
    UFUNCTION(BlueprintCallable)
    bool Remove(int32 InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidID(int32 ID) const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetTimeLineTrackPanelWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScaleLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSTimeLinePlaybackBar GetKey(int32 InKeyId) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelect();
    
    UFUNCTION(BlueprintCallable)
    int32 AddTrack(int32 InParentTrackId, const FText& InName, ESSTimeLineUiTrackColorType InColorType);
    
    UFUNCTION(BlueprintCallable)
    int32 AddKey(int32 InParentTrackId, const FText& InName, float InStartSec, float InLengthSec, bool bIsSlowStretch);
    
};

