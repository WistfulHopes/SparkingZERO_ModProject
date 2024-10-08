#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "KoratRebindDescriptionByTag.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FKoratRebindDescriptionByTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> RebindActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID ObjectBindingID;
    
    SS_API FKoratRebindDescriptionByTag();
};

