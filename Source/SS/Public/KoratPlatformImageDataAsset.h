#pragma once
#include "CoreMinimal.h"
#include "KoratPlatformImageDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratPlatformImageDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API UKoratPlatformImageDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratPlatformImageDataAssetRecord> Records;
    
public:
    UKoratPlatformImageDataAsset();

};

