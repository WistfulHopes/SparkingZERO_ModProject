#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KantanCategoryStyle.h"
#include "KantanCategoryStyleSet.generated.h"

UCLASS(Blueprintable)
class KANTANCHARTSSLATE_API UKantanCategoryStyleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKantanCategoryStyle> Styles;
    
    UKantanCategoryStyleSet();

};

