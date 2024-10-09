#pragma once
#include "CoreMinimal.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "KoratRigUnit_MeshClippingWrist.h"
#include "KoratRigUnit_SetWristR_MT.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_SetWristR_MT : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRigUnit_MeshClippingWrist Right;
    
    SS_API FKoratRigUnit_SetWristR_MT();
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;
};

