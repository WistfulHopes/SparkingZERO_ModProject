#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorReplaceTypeDataList.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratEffectColorTypeReplaceDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectColorTypeReplaceDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectColorTypeReplaceDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterEffectColorReplaceTypeDataList, FKoratEffectColorTypeReplaceDataAssetRecord> Records;
    
public:
    UKoratEffectColorTypeReplaceDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable)
    void FixedEffectBPEnumMap();
    
    UFUNCTION(BlueprintCallable)
    FKoratCharacterEffectColorReplaceTypeDataList FindReplaceSetting(const FKoratCharacterEffectColorSetDataTypeDataList& InSrcType, const FKoratCharacterEffectColorSetDataTypeDataList& InReplaceType);
    
    UFUNCTION(BlueprintCallable)
    void CheckMasterBPEnum();
    
};

