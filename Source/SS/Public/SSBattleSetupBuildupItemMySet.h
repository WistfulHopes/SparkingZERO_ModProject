#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleSetupBuildupItemMySet.generated.h"

class USSMenuButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupBuildupItemMySet : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemDescriptionTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PageLeftButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PageRightButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GuideWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LockTexture;
    
    USSBattleSetupBuildupItemMySet();

private:
    UFUNCTION(BlueprintCallable)
    void OnFocusChangeButton(USSMenuButton* InButton);
    
};

