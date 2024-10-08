#pragma once
#include "CoreMinimal.h"
#include "MaterialInstanceSetData.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FMaterialInstanceSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamics;
    
    SS_API FMaterialInstanceSetData();
};

