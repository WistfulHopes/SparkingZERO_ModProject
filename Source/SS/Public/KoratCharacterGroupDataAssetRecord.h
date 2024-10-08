#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterGroupDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterGroupDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    SS_API FKoratCharacterGroupDataAssetRecord();
};

