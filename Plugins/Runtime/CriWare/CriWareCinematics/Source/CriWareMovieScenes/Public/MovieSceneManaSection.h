#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneSection.h"
#include "MovieSceneManaSection.generated.h"

class UAtomComponent;
class UManaPlayer;
class UManaSource;
class UManaTexture;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneManaSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaSource* ManaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* ManaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExternalManaPlayer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaPlayer* ExternalManaPlayer;
    
    UMovieSceneManaSection();

};

