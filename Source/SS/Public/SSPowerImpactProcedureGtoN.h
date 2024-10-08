#pragma once
#include "CoreMinimal.h"
#include "SSPowerImpactProcedure.h"
#include "SSPowerImpactProcedureGtoN.generated.h"

UCLASS(Blueprintable)
class ASSPowerImpactProcedureGtoN : public ASSPowerImpactProcedure {
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
    ASSPowerImpactProcedureGtoN(const FObjectInitializer& ObjectInitializer);

};

