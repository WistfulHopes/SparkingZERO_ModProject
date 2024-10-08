#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterBoneDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "SSCharacterBoneDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSCharacterBoneDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterBoneDataAssetRecord CharacterBoneDataAssetRecord;
    
    USSCharacterBoneDataAssetRecord();

};

