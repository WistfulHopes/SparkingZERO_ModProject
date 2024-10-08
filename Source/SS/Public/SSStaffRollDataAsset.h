#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSStaffRollDataAssetRecord.h"
#include "SSStaffRollDataAsset.generated.h"

UCLASS(Blueprintable)
class USSStaffRollDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartScrollWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSStaffRollDataAssetRecord> Records;
    
public:
    USSStaffRollDataAsset();

    UFUNCTION(BlueprintCallable)
    void ImportStaffRoll();
    
    UFUNCTION(BlueprintCallable)
    void ExportStaffRoll();
    
};

