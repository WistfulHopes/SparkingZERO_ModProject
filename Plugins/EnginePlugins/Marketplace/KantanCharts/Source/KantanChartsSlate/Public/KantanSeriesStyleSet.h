#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KantanSeriesStyle.h"
#include "KantanSeriesStyleSet.generated.h"

UCLASS(Blueprintable)
class KANTANCHARTSSLATE_API UKantanSeriesStyleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKantanSeriesStyle> Styles;
    
    UKantanSeriesStyleSet();

};

