#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DirectionalLightDefaultSettings.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalLightDefaultSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FLinearColor SkylightAmbient;
    
    SS_API FDirectionalLightDefaultSettings();
};

