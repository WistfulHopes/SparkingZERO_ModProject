#pragma once
#include "CoreMinimal.h"
#include "SSSingletonAssetSelectItem.h"
#include "SSSingletonAssetSelect.generated.h"

USTRUCT(BlueprintType)
struct FSSSingletonAssetSelect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSSingletonAssetSelectItem> Items;
    
    SS_API FSSSingletonAssetSelect();
};

