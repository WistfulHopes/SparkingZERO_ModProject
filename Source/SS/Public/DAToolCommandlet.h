#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "DAToolCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UDAToolCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UDAToolCommandlet();

};

