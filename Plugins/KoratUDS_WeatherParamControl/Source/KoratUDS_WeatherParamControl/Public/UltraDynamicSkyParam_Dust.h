#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicSkyParam_Dust.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_Dust {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DustColor;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_Dust();
};

