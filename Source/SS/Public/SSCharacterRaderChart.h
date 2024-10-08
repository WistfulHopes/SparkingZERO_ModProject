#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "KoratBlastActionDataAssetRecord.h"
#include "KoratCharacterDataAssetRecord.h"
#include "KoratCharacterDataList.h"
#include "SSCharacterRaderChart.generated.h"

class USSCharacterNumeric;

UCLASS(Blueprintable)
class USSCharacterRaderChart : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterNumeric* RaderChartNumeric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList RaderChartCharacterID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval TaiRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RenRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DaRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval KiRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HiRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedKiValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadarChartParamMin;
    
public:
    USSCharacterRaderChart();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalcRadarChartParamInner(const FKoratBlastActionDataAssetRecord& InBlastActions, const FKoratCharacterDataAssetRecord& InCharacterData, TArray<float>& OutRadarChartParam);
    
};

