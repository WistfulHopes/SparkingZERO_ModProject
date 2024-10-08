#pragma once
#include "CoreMinimal.h"
#include "GalleryTheaterOnRequestEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGalleryTheaterOnRequestEventDispatcher, const int32, InRequest);

