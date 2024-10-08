#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSEffectFigureTransformDataRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSEffectFigureTransformDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTransform> TransformList;
    
    FSSEffectFigureTransformDataRecord();
};

