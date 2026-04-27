#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "KoratSequencerRebindInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratSequencerRebindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID BindingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ActorGUID;
    
    SS_API FKoratSequencerRebindInfo();
};

