#pragma once
#include "CoreMinimal.h"
#include "OnTargetUsesSkillActionDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTargetUsesSkillAction, ASSCharacter*, InTarget, const bool, InSectionChanged);

