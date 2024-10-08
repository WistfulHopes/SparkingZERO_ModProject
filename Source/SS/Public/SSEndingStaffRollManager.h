#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSEndingMenuManager.h"
#include "SSEndingStaffRollManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSEndingStaffRollManager : public USSEndingMenuManager {
    GENERATED_BODY()
public:
    USSEndingStaffRollManager();

protected:
    UFUNCTION(BlueprintCallable)
    void SetScreenSize(const FVector2D& InSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartScroll();
    
};

