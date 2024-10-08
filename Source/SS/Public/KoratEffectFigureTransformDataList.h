#pragma once
#include "CoreMinimal.h"
#include "KoratEffectFigureTransformDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectFigureTransformDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectFigureTransformDataList();
};

