#pragma once
#include "CoreMinimal.h"
#include "KoratDestructionDamageResult.h"
#include "KoratDestructionFieldParameter.h"
#include "KoratDestructionDamageEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FKoratDestructionDamageResult, FKoratDestructionDamageEvent, AActor*, Actor, FKoratDestructionFieldParameter, FieldParams);

