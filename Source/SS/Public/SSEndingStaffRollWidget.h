#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSEndingStaffRollWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSEndingStaffRollWidget : public USSMenuWidget {
    GENERATED_BODY()
public:
    USSEndingStaffRollWidget();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

