#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuPagerItem.h"
#include "SSUserWidget.h"
#include "SSMainMenuPager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuPager : public USSUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuPagerItem> Items;
    
public:
    USSMainMenuPager();

};

