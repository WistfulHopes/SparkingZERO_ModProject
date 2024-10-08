#pragma once
#include "CoreMinimal.h"
#include "SSStandardMenuManager.h"
#include "SSRequestManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSRequestManager : public USSStandardMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 subMenu;
    
    USSRequestManager();

};

