#pragma once
#include "CoreMinimal.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "KoratRigUnit_MeshClippingElbow.h"
#include "KoratRigUnit_SetElbowR_MT.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_SetElbowR_MT : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRigUnit_MeshClippingElbow Right;
    
	SS_API FKoratRigUnit_SetElbowR_MT();
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;
};

