#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratCharacterBoneDataAsset.generated.h"

class USSCharacterBoneDataAssetRecord;

UCLASS(Blueprintable)
class UKoratCharacterBoneDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSCharacterBoneDataAssetRecord*> PtrRecords;
    
public:
    UKoratCharacterBoneDataAsset();

};

