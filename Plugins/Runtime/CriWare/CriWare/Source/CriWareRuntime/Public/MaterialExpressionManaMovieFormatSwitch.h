#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionManaMovieFormatSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_MaterialExpressionManaMovieFormatSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Inputs[5];
    
    UDEPRECATED_MaterialExpressionManaMovieFormatSwitch();

};

