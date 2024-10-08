#pragma once
#include "CoreMinimal.h"
#include "KoratPlatformImageDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratPlatformImageDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratPlatformImageDataList();
};

