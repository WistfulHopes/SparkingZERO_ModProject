#pragma once
#include "CoreMinimal.h"
#include "KoratSubInstanceTagDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratSubInstanceTagDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    SS_API FKoratSubInstanceTagDataAssetRecord();
};

