#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSTimeLineUiScaleLevelSetting.h"
#include "SSTimeLineUiLayout.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTimeLineUiScaleLevelSetting> ScaleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScaleLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TickTextOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaneBarHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaneLineSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreeIconToTextSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreeHierarchyIndent;
    
    SS_API FSSTimeLineUiLayout();
};

