#pragma once
#include "CoreMinimal.h"
#include "KoratBuffFormTypeDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBuffFormTypeDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    SS_API FKoratBuffFormTypeDataAssetRecord();
};

