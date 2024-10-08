#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratSurfaceAndSpaceRelateDataList.h"
#include "MutualDataAsset.h"
#include "KoratSurfaceTypeToAtbEnumDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API UKoratSurfaceTypeToAtbEnumDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FKoratInteractAtbTypeDataList> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSpaceAreaTypeDataList> SpaceAreaRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSurfaceAndSpaceRelateDataList> SurfaceAndSpaceRelate;
    
public:
    UKoratSurfaceTypeToAtbEnumDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

