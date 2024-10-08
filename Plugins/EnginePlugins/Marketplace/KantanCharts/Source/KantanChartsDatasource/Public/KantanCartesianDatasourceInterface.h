#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KantanCartesianDatapoint.h"
#include "KantanCartesianDatasourceInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UKantanCartesianDatasourceInterface : public UInterface {
    GENERATED_BODY()
};

class IKantanCartesianDatasourceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetSeriesName(int32 SeriesIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetSeriesId(int32 CatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FKantanCartesianDatapoint> GetSeriesDatapoints(int32 SeriesIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumSeries() const;
    
};

