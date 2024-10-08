#pragma once
#include "CoreMinimal.h"
#include "SSSingletonAssetKeyData.generated.h"

USTRUCT(BlueprintType)
struct FSSSingletonAssetKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RecordMapKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AssetNames;
    
    SS_API FSSSingletonAssetKeyData();
};

