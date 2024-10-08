#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleTitleUi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleTitleUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleTextBlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleBackImageName;
    
public:
    USSDramaticBattleTitleUi();

};

