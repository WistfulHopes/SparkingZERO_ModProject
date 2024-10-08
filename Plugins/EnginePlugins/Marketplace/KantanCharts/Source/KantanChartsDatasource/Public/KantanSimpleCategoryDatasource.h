#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KantanCategoryDatasourceInterface.h"
#include "KantanSimpleCategoryDatasource.generated.h"

class UKantanSimpleCategoryDatasource;

UCLASS(Blueprintable, EditInlineNew)
class KANTANCHARTSDATASOURCE_API UKantanSimpleCategoryDatasource : public UObject, public IKantanCategoryDatasourceInterface {
    GENERATED_BODY()
public:
    UKantanSimpleCategoryDatasource();

    UFUNCTION(BlueprintCallable)
    static UKantanSimpleCategoryDatasource* NewSimpleCategoryDatasource();
    
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

