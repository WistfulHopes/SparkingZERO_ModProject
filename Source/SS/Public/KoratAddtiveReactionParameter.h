#pragma once
#include "CoreMinimal.h"
#include "KoratAddtiveReactionParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratAddtiveReactionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrontHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArmor;
    
    SS_API FKoratAddtiveReactionParameter();
};

