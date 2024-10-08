#pragma once
#include "CoreMinimal.h"
#include "SSPowerImpactProcedure.h"
#include "SSPowerImpactProcedureNtoG.generated.h"

UCLASS(Blueprintable)
class ASSPowerImpactProcedureNtoG : public ASSPowerImpactProcedure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FowardSocketNameNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FowardSocketNameGiant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightHandOffsetNameGiant;
    
public:
    ASSPowerImpactProcedureNtoG(const FObjectInitializer& ObjectInitializer);

};

