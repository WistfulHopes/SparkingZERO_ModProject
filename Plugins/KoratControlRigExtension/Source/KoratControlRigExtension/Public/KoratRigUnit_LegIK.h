#pragma once
#include "CoreMinimal.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "KoratRigUnit_LegIKDefinition.h"
#include "KoratRigUnit_LegIK_WorkData.h"
#include "KoratRigUnit_LegIK.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_LegIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratRigUnit_LegIKDefinition> LegsDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratRigUnit_LegIK_WorkData WorkData;
    
    KORATCONTROLRIGEXTENSION_API FKoratRigUnit_LegIK();
};

