#pragma once
#include "CoreMinimal.h"
#include "EDragonType.h"
#include "MutualDataAsset.h"
#include "SSMythicalOrbDataAssetRecord.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USSMythicalOrbDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDragonType DragonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    USSMythicalOrbDataAssetRecord();

};

