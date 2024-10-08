#pragma once
#include "CoreMinimal.h"
#include "KoratExFacialInformation.h"
#include "KoratFacialExpressionDataList.h"
#include "MutualDataAsset.h"
#include "SSExFacialExpressionDataAsset.generated.h"

UCLASS(Blueprintable)
class USSExFacialExpressionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratFacialExpressionDataList, FKoratExFacialInformation> RecordsByDataList;
    
    USSExFacialExpressionDataAsset();

    UFUNCTION(BlueprintCallable)
    void ImportFacialExExpressionDataFromCSV();
    
};

