#pragma once
#include "CoreMinimal.h"
#include "KoratSubInstanceTagDataList.h"
#include "KoratCharacterDataSubInstanceAsset.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FKoratCharacterDataSubInstanceAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSubInstanceTagDataList Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimInstanceForSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimInstanceForEventUI;
    
    SS_API FKoratCharacterDataSubInstanceAsset();
};

