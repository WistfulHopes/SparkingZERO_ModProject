#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorFunctionDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowDisplayConditionDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataOption.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowDisplayConditionDataList DisplayCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorFunctionDataList Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleCutEditorUIWindowSelectItemDataList> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataOption Option;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAssetRecord();
};

