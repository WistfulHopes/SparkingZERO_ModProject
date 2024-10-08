#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratParticleBranchRowGetter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKoratParticleBranchRowGetter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UKoratParticleBranchRowGetter();

};

