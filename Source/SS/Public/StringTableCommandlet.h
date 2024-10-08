#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "StringTableCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UStringTableCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UStringTableCommandlet();

};

