#pragma once
#include "CoreMinimal.h"
#include "KoratChainPlaySoundDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratChainPlaySoundDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratChainPlaySoundDataList();
};

