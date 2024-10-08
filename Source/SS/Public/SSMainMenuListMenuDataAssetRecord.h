#pragma once
#include "CoreMinimal.h"
#include "EMainMenuButtonBadgeCondition.h"
#include "EMainMenuListMenuMode.h"
#include "EMainMenuSceneArea.h"
#include "KoratButtonGuideDataList.h"
#include "SSMainMenuListMenuButtonData.h"
#include "SSMainMenuListMenuDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuListMenuDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuSceneArea AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuListMenuButtonData> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuListMenuMode MenuMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuButtonBadgeCondition NotificationBadgeCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ButtonGuideHiddenIndexes;
    
    SS_API FSSMainMenuListMenuDataAssetRecord();
};

