#pragma once
#include "CoreMinimal.h"
#include "OnManaPlayerSubtitleChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManaPlayerSubtitleChanged, FText, Subtitle);

