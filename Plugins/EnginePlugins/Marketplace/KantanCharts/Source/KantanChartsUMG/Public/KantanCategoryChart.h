#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CategoryStyleManualMapping.h"
#include "KantanChart.h"
#include "KantanCategoryChart.generated.h"

class UKantanCategoryStyleSet;

UCLASS(Abstract, Blueprintable)
class KANTANCHARTSUMG_API UKantanCategoryChart : public UKantanChart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPerCategoryStyles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKantanCategoryStyleSet* CategoryStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCategoryStyleManualMapping> ManualStyleMappings;
    
    UKantanCategoryChart();

    UFUNCTION(BlueprintCallable)
    void AddCategoryStyleOverride(FName CategoryId, FLinearColor Color);
    
};

