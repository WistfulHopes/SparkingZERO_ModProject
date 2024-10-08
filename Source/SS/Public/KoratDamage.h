#pragma once
#include "CoreMinimal.h"
#include "KoratDamageReactionDataList.h"
#include "KoratDamage.generated.h"

USTRUCT(BlueprintType)
struct FKoratDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDamageReactionDataList Reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromFront;
    
    SS_API FKoratDamage();
};

