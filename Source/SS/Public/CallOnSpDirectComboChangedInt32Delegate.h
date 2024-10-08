#pragma once
#include "CoreMinimal.h"
#include "CallOnSpDirectComboChangedInt32Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCallOnSpDirectComboChangedInt32, int32, InIndex, int32, InValue, const FString&, InName);

