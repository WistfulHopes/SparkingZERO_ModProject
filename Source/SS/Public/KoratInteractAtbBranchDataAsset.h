#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractMultiDataRecord.h"
#include "MutualDataAsset.h"
#include "KoratInteractAtbBranchDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractAtbBranchDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratInteractAtbTypeDataList, FKoratInteractMultiDataRecord> SettingList;
    
public:
    UKoratInteractAtbBranchDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

