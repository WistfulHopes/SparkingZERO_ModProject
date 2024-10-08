#pragma once
#include "CoreMinimal.h"
#include "EMainMenuButtonBadgeCondition.h"
#include "EMainMenuListButtonBehaviour.h"
#include "EMainMenuOnlineCheckMode.h"
#include "KoratButtonGuideDataList.h"
#include "SSMainMenuListButtonDialogData.h"
#include "SSMainMenuListOpenWidgetData.h"
#include "SSMainMenuListButtonBase.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuListButtonBase {
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
    FSSMainMenuListButtonDialogData DialogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuListOpenWidgetData WidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuOnlineCheckMode OnlineCheckMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictDuringInstall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlineOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ButtonGuideHiddenIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuButtonBadgeCondition NotificationBadgeCondition;
    
    SS_API FSSMainMenuListButtonBase();
};

