#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSMainMenuUserInfoCategoryTab.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuUserInfoCategoryTab : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> HeaderTexts;
    
    USSMainMenuUserInfoCategoryTab();

};

