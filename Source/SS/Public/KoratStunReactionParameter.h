#pragma once
#include "CoreMinimal.h"
#include "KoratStunReactionParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratStunReactionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownToRevivalTime;
    
    SS_API FKoratStunReactionParameter();
};

