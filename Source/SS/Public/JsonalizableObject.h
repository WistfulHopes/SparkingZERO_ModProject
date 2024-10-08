#pragma once
#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "JsonalizableObject.generated.h"

UCLASS(Blueprintable)
class UJsonalizableObject : public UClass {
    GENERATED_BODY()
public:
    UJsonalizableObject();

};

