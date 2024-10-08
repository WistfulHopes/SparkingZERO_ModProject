#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterEffectFigureTransform.generated.h"

class USSEffectFigureTransformDataAsset;

UCLASS(Blueprintable)
class USSCharacterEffectFigureTransform : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEffectFigureTransformDataAsset* FigureTransform;
    
    USSCharacterEffectFigureTransform();

};

