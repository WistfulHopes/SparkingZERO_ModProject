#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSPLMRoomResourceDataAssetRecord.h"
#include "SSPLMRoomResourceDataAsset.generated.h"

UCLASS(Blueprintable)
class USSPLMRoomResourceDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSPLMRoomResourceDataAssetRecord> Records;
    
public:
    USSPLMRoomResourceDataAsset();

};

