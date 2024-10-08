#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterAttributeTagDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterAttributeTagDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    SS_API FKoratCharacterAttributeTagDataAssetRecord();
};

