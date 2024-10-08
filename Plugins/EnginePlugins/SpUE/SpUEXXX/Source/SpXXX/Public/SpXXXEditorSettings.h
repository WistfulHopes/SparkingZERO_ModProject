#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpXXXEditorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class SPXXX_API USpXXXEditorSettings : public UObject {
    GENERATED_BODY()
public:
    USpXXXEditorSettings();

};

