#pragma once
#include "CoreMinimal.h"
#include "SSStandardMenuManager.h"
#include "SSAdventureManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSAdventureManager : public USSStandardMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 subMenu;
    
    USSAdventureManager();

};

