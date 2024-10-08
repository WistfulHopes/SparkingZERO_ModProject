#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "MutualDataAsset.h"
#include "SSMontageLevelSequenceArray.h"
#include "SSFigureMLSDataAsset.generated.h"

UCLASS(Blueprintable)
class USSFigureMLSDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FSSMontageLevelSequenceArray> RecordsByDataList;
    
    USSFigureMLSDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

