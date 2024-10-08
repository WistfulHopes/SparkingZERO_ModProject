#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "SSUiWidget.h"
#include "SSImpactBaseUi.generated.h"

class USSImpactBoostKey;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSImpactBaseUi : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> BoostVisibilityWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> GenkaiVisibilityWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSImpactBoostKey* BoostButton;
    
public:
    USSImpactBaseUi();

    UFUNCTION(BlueprintCallable)
    void StartInPlayerIndex(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetGenkaiBoostThreshold(int32 InWhereFrom);
    
    UFUNCTION(BlueprintCallable)
    void SetBoostVisibility(ESlateVisibility InVisibilyty);
    
    UFUNCTION(BlueprintCallable)
    void SetBoostLevel(int32 InBoostLv);
    
    UFUNCTION(BlueprintCallable)
    void PlayBoostReaction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoostLevelFromBlueprint() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugEnableUnitTest(bool bEnable);
    
};

