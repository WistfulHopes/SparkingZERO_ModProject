#pragma once
#include "CoreMinimal.h"
#include "CallOnSpDirectComboChangedFloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCallOnSpDirectComboChangedFloat, int32, InIndex, float, InValue, const FString&, InName);

