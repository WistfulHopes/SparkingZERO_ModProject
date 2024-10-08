#pragma once
#include "CoreMinimal.h"
#include "SSPowerImpactProcedure.h"
#include "SSPowerImpactProcedureGtoG.generated.h"

UCLASS(Blueprintable)
class ASSPowerImpactProcedureGtoG : public ASSPowerImpactProcedure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FowardSocketNameGvG;
    
public:
    ASSPowerImpactProcedureGtoG(const FObjectInitializer& ObjectInitializer);

};

