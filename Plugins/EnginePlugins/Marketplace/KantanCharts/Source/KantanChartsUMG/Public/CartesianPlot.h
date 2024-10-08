#pragma once
#include "CoreMinimal.h"
#include "KantanCartesianPlotBase.h"
#include "CartesianPlot.generated.h"

class UObject;

UCLASS(Blueprintable)
class KANTANCHARTSUMG_API UCartesianPlot : public UKantanCartesianPlotBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DataSource;
    
public:
    UCartesianPlot();

    UFUNCTION(BlueprintCallable)
    bool SetDatasource(UObject* InDatasource);
    
};

