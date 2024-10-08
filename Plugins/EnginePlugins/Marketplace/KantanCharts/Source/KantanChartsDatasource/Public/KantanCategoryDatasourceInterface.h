#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KantanCategoryDatasourceInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UKantanCategoryDatasourceInterface : public UInterface {
    GENERATED_BODY()
};

class IKantanCategoryDatasourceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCategoryValue(int32 CatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetCategoryName(int32 CatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCategoryId(int32 CatIdx) const;
    
};

