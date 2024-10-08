#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "ESSKeyInputType.h"
#include "KoratTriggerEffectParameters.h"
#include "MovieSceneTriggerEffectSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTriggerEffectSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSKeyInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratTriggerEffectParameters Params;
    
    UMovieSceneTriggerEffectSection();

};

