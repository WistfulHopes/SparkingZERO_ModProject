#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneSubtitleLanguageGroup.h"
#include "MutualDataAsset.h"
#include "SSEventSceneSubtitleDisplayTimeGroup.h"
#include "SSEventSceneSubtitleSystemDataAsset.generated.h"

UCLASS(Blueprintable)
class USSEventSceneSubtitleSystemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSEventSceneSubtitleLanguageGroup, FSSEventSceneSubtitleDisplayTimeGroup> DisplayTimeGroups;
    
public:
    USSEventSceneSubtitleSystemDataAsset();

};

