#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneSubtitleLanguage.h"
#include "ESSEventSceneSubtitleLanguageGroup.h"
#include "ESSEventSceneSubtitleType.h"
#include "MutualDataAsset.h"
#include "KoratEventSceneSubtitleSystemDataAsset.generated.h"

class USSEventSceneSubtitleSystemDataAsset;

UCLASS(Blueprintable)
class UKoratEventSceneSubtitleSystemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSEventSceneSubtitleLanguage, ESSEventSceneSubtitleLanguageGroup> Languages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSEventSceneSubtitleType, USSEventSceneSubtitleSystemDataAsset*> Settings;
    
public:
    UKoratEventSceneSubtitleSystemDataAsset();

};

