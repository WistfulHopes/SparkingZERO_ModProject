#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratInstanceParameterColor.generated.h"

USTRUCT(BlueprintType)
struct FKoratInstanceParameterColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ParameterColor;
    
    SS_API FKoratInstanceParameterColor();
};

