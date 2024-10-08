#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpXXXEngineSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class SPXXX_API USpXXXEngineSettings : public UObject {
    GENERATED_BODY()
public:
    USpXXXEngineSettings();

};

