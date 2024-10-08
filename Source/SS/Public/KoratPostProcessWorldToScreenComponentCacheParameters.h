#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessWorldToScreenComponentCacheParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FKoratPostProcessWorldToScreenComponentCacheParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> LocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerIndex;
    
    SS_API FKoratPostProcessWorldToScreenComponentCacheParameters();
};

