#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSTermsDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USSTermsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> IconTexture;
    
    USSTermsDataAsset();

};

