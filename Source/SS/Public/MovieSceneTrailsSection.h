#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MovieSceneSection.h"
#include "MovieSceneTrailsSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTrailsSection : public UMovieSceneSection {
    GENERATED_BODY()
    	
public:
    UMovieSceneTrailsSection();
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETrailWidthMode> WidthScaleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthScaleScalar;
    
    const FName& GetFirstSocketName() const { return FirstSocketName; }
    const FName& GetSecondSocketName() const { return SecondSocketName; }
    const TEnumAsByte<ETrailWidthMode>& GetWidthScaleMode() const { return WidthScaleMode; }
    const float& GetWidthScaleScalar() const { return WidthScaleScalar; }

};
