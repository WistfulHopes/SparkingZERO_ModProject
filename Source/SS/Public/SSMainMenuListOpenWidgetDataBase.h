#pragma once
#include "CoreMinimal.h"
#include "EMainMenuOnlineCheckMode.h"
#include "EMainMenuSettingsMode.h"
#include "KoratButtonGuideDataList.h"
#include "SSMainMenuListSettingsProperty.h"
#include "SSMainMenuListOpenWidgetDataBase.generated.h"

class USSMainMenuWidgetFromList;

USTRUCT(BlueprintType)
struct FSSMainMenuListOpenWidgetDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMainMenuWidgetFromList> SettingsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuListSettingsProperty> SettingsProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SettingsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SettingsEnterLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuSettingsMode SettingsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USSMainMenuWidgetFromList>> Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> WidgetTitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuOnlineCheckMode OnlineCheckMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ButtonGuideHiddenIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlineOnly;
    
    SS_API FSSMainMenuListOpenWidgetDataBase();
};

