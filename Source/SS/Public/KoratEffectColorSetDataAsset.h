#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetData.h"
#include "MutualDataAsset.h"
#include "KoratEffectColorSetDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectColorSetDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterEffectColorSetData> Records;
    
public:
    UKoratEffectColorSetDataAsset();

};

