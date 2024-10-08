#pragma once
#include "CoreMinimal.h"
#include "SSBuiltInMenuItem.generated.h"

class USSMenuButton;

USTRUCT(BlueprintType)
struct FSSBuiltInMenuItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* Button;
    
    SS_API FSSBuiltInMenuItem();
};

