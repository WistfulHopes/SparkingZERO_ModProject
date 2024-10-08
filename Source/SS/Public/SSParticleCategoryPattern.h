#pragma once
#include "CoreMinimal.h"
#include "SSParticleCategoryPattern.generated.h"

USTRUCT(BlueprintType)
struct FSSParticleCategoryPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrefixString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PrefixHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PrefixLength;
    
    SS_API FSSParticleCategoryPattern();
};

