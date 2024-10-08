#pragma once
#include "CoreMinimal.h"
#include "KoratEffectFigureTransformTypeDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectFigureTransformTypeDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EffectTypes;
    
    SS_API FKoratEffectFigureTransformTypeDataAssetRecord();
};

