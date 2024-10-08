#pragma once
#include "CoreMinimal.h"
#include "EMainMenuListButtonBehaviour.h"
#include "EMainMenuListButtonQuickMatchType.h"
#include "SSMainMenuListOpenWidgetDataBase.h"
#include "SSMainMenuWidgetButtonData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuWidgetButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuListButtonBehaviour BehaviourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuListButtonQuickMatchType QuickMatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuListOpenWidgetDataBase WidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SceneIndex;
    
    SS_API FSSMainMenuWidgetButtonData();
};

