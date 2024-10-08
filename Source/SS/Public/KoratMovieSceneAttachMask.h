#pragma once
#include "CoreMinimal.h"
#include "KoratMovieSceneAttachMask.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneAttachMask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Mask;
    
public:
    SS_API FKoratMovieSceneAttachMask();
};

