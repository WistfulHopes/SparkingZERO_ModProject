#pragma once
#include "CoreMinimal.h"
#include "ESSEndingRegion.h"
#include "ESSEndingUIType.h"
#include "KoratMovieItemDataList.h"
#include "MutualDataAsset.h"
#include "SSEndingDataAsset.generated.h"

class USSStaffRollDataAsset;

UCLASS(Blueprintable)
class USSEndingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieItemDataList MovieItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSEndingRegion, TSoftObjectPtr<USSStaffRollDataAsset>> StaffRollDataWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSEndingRegion, TSoftObjectPtr<USSStaffRollDataAsset>> StaffRollDataPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSEndingRegion, TSoftObjectPtr<USSStaffRollDataAsset>> StaffRollDataXOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSEndingRegion, TSoftObjectPtr<USSStaffRollDataAsset>> StaffRollDataSw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSEndingUIType, TSoftClassPtr<UObject>> PtrRecords;
    
public:
    USSEndingDataAsset();

};

