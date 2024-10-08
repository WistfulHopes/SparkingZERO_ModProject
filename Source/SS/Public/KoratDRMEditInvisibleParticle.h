#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditInvisibleParticle.generated.h"

USTRUCT(BlueprintType)
struct FKoratDRMEditInvisibleParticle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllEmitters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> EmitterNames;
    
    SS_API FKoratDRMEditInvisibleParticle();
};

