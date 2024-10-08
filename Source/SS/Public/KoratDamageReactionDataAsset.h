#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratDamageReactionDataAsset.generated.h"

class USSDamageReactionDataAssetRecord;

UCLASS(Blueprintable)
class UKoratDamageReactionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDamageReactionDataAssetRecord*> PtrRecords;
    
public:
    UKoratDamageReactionDataAsset();

};

