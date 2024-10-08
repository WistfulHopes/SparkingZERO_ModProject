#pragma once
#include "CoreMinimal.h"
#include "KantanCategoryDatasourceInterface.h"
#include "KantanBarChartBase.h"
#include "SimpleBarChart.generated.h"

UCLASS(Blueprintable)
class KANTANCHARTSUMG_API USimpleBarChart : public UKantanBarChartBase, public IKantanCategoryDatasourceInterface {
    GENERATED_BODY()
public:
    USimpleBarChart();

    UFUNCTION(BlueprintCallable)
    void BP_UpdateCategoryValue(FName ID, float Value, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveCategory(FName ID, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveAllCategories();
    
    UFUNCTION(BlueprintCallable)
    void BP_AddCategoryWithId(FName ID, FText Name, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddCategory(FText Name, FName& CatId);
    

    // Fix for true pure virtual functions not being implemented
};

