#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuListWidgetStack.generated.h"

class USSMainMenuSubMenu;
class USSMainMenuWidgetFromList;

USTRUCT(BlueprintType)
struct FSSMainMenuListWidgetStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMainMenuWidgetFromList*> Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMainMenuSubMenu* PreviousDisplayedMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMainMenuSubMenu*> DisplayedMenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DecidedIndexList;
    
    SS_API FSSMainMenuListWidgetStack();
};

