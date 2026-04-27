#pragma once
#include "CoreMinimal.h"
#include "ModeHUNCommonDataStruct.h"
#include "ModeHUNDataStruct.h"
#include "MutualDataAsset.h"
#include "SSModeHUNDataAsset.generated.h"

UCLASS(Blueprintable)
class USSModeHUNDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FModeHUNDataStruct> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModeHUNCommonDataStruct CommonData;
    
public:
    USSModeHUNDataAsset();

    UFUNCTION(BlueprintCallable)
    void SetOrderNumSort();
    
};

