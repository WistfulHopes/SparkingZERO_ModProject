#pragma once
#include "CoreMinimal.h"
#include "KoratCameraModeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCameraModeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCameraModeDataList();
};

