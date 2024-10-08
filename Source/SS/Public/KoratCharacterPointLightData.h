#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratCharacterPointLightData.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterPointLightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColor;
    
    SS_API FKoratCharacterPointLightData();
};

