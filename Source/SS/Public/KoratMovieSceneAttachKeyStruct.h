#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneAttachKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneAttachKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceKey PositionReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceKey RotationReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PositionFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotationFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PositionFirstSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PositionSecondSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RotationFirstSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RotationSecondSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    SS_API FKoratMovieSceneAttachKeyStruct();
};

