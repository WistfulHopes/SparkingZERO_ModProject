#pragma once
#include "CoreMinimal.h"
#include "KoratCameraModeDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCameraModeDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    SS_API FKoratCameraModeDataAssetRecord();
};

