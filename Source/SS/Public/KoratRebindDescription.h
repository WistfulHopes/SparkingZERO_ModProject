#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "KoratRebindDescription.generated.h"

class AActor;
class UMovieSceneTrack;

USTRUCT(BlueprintType)
struct FKoratRebindDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RebindMakerRegexName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> RebindActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMovieSceneTrack>> DisableTracks;
    
    SS_API FKoratRebindDescription();
};

