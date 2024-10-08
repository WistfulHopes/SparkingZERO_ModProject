#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectAtbTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectAtbTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectAtbTypeDataAssetRecord> Records;
    
public:
    UKoratEffectAtbTypeDataAsset();

};

