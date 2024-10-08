#pragma once
#include "CoreMinimal.h"
#include "SSSingletonAssetIndexMember.h"
#include "SSSingletonAssetIndex.generated.h"

USTRUCT(BlueprintType)
struct FSSSingletonAssetIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSSingletonAssetIndexMember> Members;
    
    SS_API FSSSingletonAssetIndex();
};

