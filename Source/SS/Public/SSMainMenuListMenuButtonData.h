#pragma once
#include "CoreMinimal.h"
#include "SSMainMenu2ndMenuButtonData.h"
#include "SSMainMenuListButtonBase.h"
#include "SSMainMenuListMenuButtonData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuListMenuButtonData : public FSSMainMenuListButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenu2ndMenuButtonData> ButtonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    SS_API FSSMainMenuListMenuButtonData();
};

