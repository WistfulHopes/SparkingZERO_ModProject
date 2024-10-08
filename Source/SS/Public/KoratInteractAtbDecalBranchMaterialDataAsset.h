#pragma once
#include "CoreMinimal.h"
#include "KoratDecalMaterialDataRecord.h"
#include "KoratInteractAtbTypeDataList.h"
#include "MutualDataAsset.h"
#include "KoratInteractAtbDecalBranchMaterialDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractAtbDecalBranchMaterialDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratInteractAtbTypeDataList, FKoratDecalMaterialDataRecord> SettingList;
    
public:
    UKoratInteractAtbDecalBranchMaterialDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

