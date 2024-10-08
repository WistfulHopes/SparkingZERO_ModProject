#pragma once
#include "CoreMinimal.h"
#include "KoratDamageReactionDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "SSDamageReactionDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSDamageReactionDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDamageReactionDataAssetRecord DamageReactionDataAssetRecord;
    
    USSDamageReactionDataAssetRecord();

};

