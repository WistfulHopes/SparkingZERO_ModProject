#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorFunctionDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowDisplayConditionDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "SSDramaticBattleCutEditorUIWindowSelectItemDataOption.h"
#include "SSDramaticBattleCutEditorUIWindowSelectItemDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowSelectItemDataAssetRecord {
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
    FSSDramaticBattleCutEditorUIWindowSelectItemDataOption Option;
    
    SS_API FSSDramaticBattleCutEditorUIWindowSelectItemDataAssetRecord();
};

