#pragma once
#include "CoreMinimal.h"
#include "SSCharacterBuffFormDataAssetRecord.generated.h"

class USSBuffFormDataAsset;

USTRUCT(BlueprintType)
struct FSSCharacterBuffFormDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuffFormDataAsset* BuffFormData;
    
    SS_API FSSCharacterBuffFormDataAssetRecord();
};

