#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuListButtonBase.h"
#include "SSMainMenu3rdMenuButtonData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenu3rdMenuButtonData : public FSSMainMenuListButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    SS_API FSSMainMenu3rdMenuButtonData();
};

