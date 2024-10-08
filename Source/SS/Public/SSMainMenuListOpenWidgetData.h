#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuListOpenWidgetDataBase.h"
#include "SSMainMenuWidgetButtonData.h"
#include "SSMainMenuListOpenWidgetData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuListOpenWidgetData : public FSSMainMenuListOpenWidgetDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuWidgetButtonData> ButtonData;
    
    SS_API FSSMainMenuListOpenWidgetData();
};

