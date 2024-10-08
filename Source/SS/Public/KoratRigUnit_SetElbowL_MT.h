#pragma once
#include "CoreMinimal.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "KoratRigUnit_MeshClippingElbow.h"
#include "KoratRigUnit_SetElbowL_MT.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_SetElbowL_MT : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRigUnit_MeshClippingElbow Left;
    
    SS_API FKoratRigUnit_SetElbowL_MT();
};

