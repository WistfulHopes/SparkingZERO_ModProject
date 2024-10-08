#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Chaos/ChaosEngineInterface.h"
#include "KoratActionDataList.h"
#include "KoratInteractAtbDataAssetRecord.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractSpaceAreaDataAssetRecord.h"
#include "KoratInteractTriggerEnumDataAssetRecord.h"
#include "KoratInteractTriggerTypeDataList.h"
#include "KoratMapDataList.h"
#include "KoratSpaceAreaReplaceSetting.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratEffectMapData.generated.h"

class UKoratEffectSpaceAreaDataAsset;
class UKoratInteractAtbDataAsset;
class UKoratInteractSpaceAreaDataAsset;
class UKoratInteractTriggerEnumDataAsset;
class UKoratSurfaceTypeToAtbEnumDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratEffectMapData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratSurfaceTypeToAtbEnumDataAsset* SurfaceTypeToAtbEnumDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractTriggerEnumDataAsset* InteractTriggerEnumDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbDataAsset* InteractAtbDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FKoratInteractAtbTypeDataList> SurfaceTypeToAtbEnumDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratInteractTriggerEnumDataAssetRecord> InteractTriggerEnumRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratInteractTriggerTypeDataList> ActionToInteractTriggerTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratInteractAtbTypeDataList, FKoratInteractAtbDataAssetRecord> InteractAtbRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> InteractAtbResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractSpaceAreaDataAsset* InteractSpaceAreaDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratSpaceAreaTypeDataList, FKoratInteractSpaceAreaDataAssetRecord> InteractSpaceAreaRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratSpaceAreaTypeDataList, UKoratEffectSpaceAreaDataAsset*> EffectSpaceAreaDataAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratInteractAtbTypeDataList, FKoratSpaceAreaReplaceSetting> InteractAtbAndSpaceTypeRelateMap;
    
public:
    UKoratEffectMapData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetuped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoneMapKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetPhysicalSurfaceFromInteractAtbType(const FKoratInteractAtbTypeDataList InAtbType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratMapDataList GetMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratInteractAtbTypeDataList GetInteractAtbType(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface) const;
    
};

