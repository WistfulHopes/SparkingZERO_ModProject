#pragma once
#include "CoreMinimal.h"
#include "KoratEyeInformation.h"
#include "KoratFacialExpressionDataList.h"
#include "MutualDataAsset.h"
#include "SSEyeInformationDataAsset.generated.h"

UCLASS(Blueprintable)
class USSEyeInformationDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratFacialExpressionDataList, FKoratEyeInformation> RecordsByDataList;
    
    USSEyeInformationDataAsset();

    UFUNCTION(BlueprintCallable)
    void ImportFacialExpressionDataFromCSV();
    
};

