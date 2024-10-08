#pragma once
#include "CoreMinimal.h"
#include "SSSingletonAssetSelectItem.generated.h"

USTRUCT(BlueprintType)
struct FSSSingletonAssetSelectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutput;
    
    SS_API FSSSingletonAssetSelectItem();
};

