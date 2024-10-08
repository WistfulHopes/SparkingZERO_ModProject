#pragma once
#include "CoreMinimal.h"
#include "OnManaPlayerMovieOpenFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManaPlayerMovieOpenFailed, const FString&, FailedUrl);

