#pragma once
#include "CoreMinimal.h"
#include "SSSupportingCharacterData.h"
#include "SSCharacterLoadingSupporter.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterLoadingSupporter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSupportingCharacterData CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaySide;
    
    SS_API FSSCharacterLoadingSupporter();
};

