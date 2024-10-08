#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSChangeCharacterActionDataAssetRecord.h"
#include "SSChangeCharacterActionDataAsset.generated.h"

UCLASS(Blueprintable)
class USSChangeCharacterActionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSChangeCharacterActionDataAssetRecord> Records;
    
public:
    USSChangeCharacterActionDataAsset();

};

