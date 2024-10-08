#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneViewSwitchSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneViewSwitchSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLowPriority;
    
    UMovieSceneViewSwitchSection();

};

