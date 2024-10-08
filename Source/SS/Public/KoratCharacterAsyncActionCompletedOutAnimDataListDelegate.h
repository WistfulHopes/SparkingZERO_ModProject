#pragma once
#include "CoreMinimal.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratCharacterAsyncActionCompletedOutAnimDataListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKoratCharacterAsyncActionCompletedOutAnimDataList, const FKoratReplaceAnimationDataList, OutAnimDataList);

