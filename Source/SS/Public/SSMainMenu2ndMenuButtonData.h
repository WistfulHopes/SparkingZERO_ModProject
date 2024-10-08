#pragma once
#include "CoreMinimal.h"
#include "SSMainMenu3rdMenuButtonData.h"
#include "SSMainMenuListButtonBase.h"
#include "SSMainMenu2ndMenuButtonData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenu2ndMenuButtonData : public FSSMainMenuListButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenu3rdMenuButtonData> ButtonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    SS_API FSSMainMenu2ndMenuButtonData();
};

