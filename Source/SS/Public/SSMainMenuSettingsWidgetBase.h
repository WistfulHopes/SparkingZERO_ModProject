#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuListSettingsProperty.h"
#include "SSMainMenuWidgetFromList.h"
#include "SSMainMenuSettingsWidgetBase.generated.h"

class USSMenuWidget;
class USSPropertySettingsButton;
class USSPropertySettingsWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuSettingsWidgetBase : public USSMainMenuWidgetFromList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MenuIndexes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuWidget*> RelationalWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPropertySettingsWidget* PropertySettingsWidget;
    
public:
    USSMainMenuSettingsWidgetBase();

    UFUNCTION(BlueprintCallable)
    int32 OnPropertySlideRight(USSPropertySettingsButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    int32 OnPropertySlideLeft(USSPropertySettingsButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeProperty(FSSMainMenuListSettingsProperty InProperty, int32 InIndex);
    
};

