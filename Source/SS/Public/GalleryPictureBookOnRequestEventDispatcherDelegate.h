#pragma once
#include "CoreMinimal.h"
#include "GalleryPictureBookOnRequestEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGalleryPictureBookOnRequestEventDispatcher, const int32, InRequest);

