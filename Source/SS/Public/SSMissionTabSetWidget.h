#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMissionTabSetWidget.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMissionTabSetWidget : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* RightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* PlaySideButton;
    
public:
    USSMissionTabSetWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnClickSideButton(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void ButtonClickAnimControl(USSMenuButton* InButton);
    
};

