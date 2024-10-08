#pragma once
#include "CoreMinimal.h"
#include "GalleryMyDataOnRequestEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGalleryMyDataOnRequestEventDispatcher, const int32, InRequest);

