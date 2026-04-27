#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Channels/MovieSceneChannelProxy.h"
#include "MovieSceneViewSwitchSection.generated.h"

UCLASS(Blueprintable)
class SS_API UMovieSceneViewSwitchSection : public UMovieSceneSection {
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
