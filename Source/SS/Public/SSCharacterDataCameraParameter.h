#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSCharacterDataCameraParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterDataCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtNullOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LengthScale;
    
    SS_API FSSCharacterDataCameraParameter();
};

