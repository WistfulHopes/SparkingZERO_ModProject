#pragma once
#include "CoreMinimal.h"
#include "KoratButtonGuideDataList.h"
#include "SSDramaticBattleCutEditorUIWindowButtonGuideDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowButtonGuideDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratButtonGuideDataList ButtonGuide;
    
    SS_API FSSDramaticBattleCutEditorUIWindowButtonGuideDataAssetRecord();
};

