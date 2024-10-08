#pragma once
#include "CoreMinimal.h"
#include "KoratButtonGuideDataList.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList ButtonGuide;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAssetRecord();
};

