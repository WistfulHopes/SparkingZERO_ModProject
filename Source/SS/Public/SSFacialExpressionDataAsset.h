#pragma once
#include "CoreMinimal.h"
#include "KoratFacialExpressionDataList.h"
#include "KoratFacialInformation.h"
#include "MutualDataAsset.h"
#include "SSFacialExpressionDataAsset.generated.h"

UCLASS(Blueprintable)
class USSFacialExpressionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratFacialExpressionDataList, FKoratFacialInformation> RecordsByDataList;
    
    USSFacialExpressionDataAsset();

    UFUNCTION(BlueprintCallable)
    void ImportFacialExpressionDataFromCSV();
    
};

