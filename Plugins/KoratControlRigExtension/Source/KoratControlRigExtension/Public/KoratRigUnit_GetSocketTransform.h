#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyCache.h"
#include "ControlRigDefines.h"
#include "Units/RigUnit.h"
#include "UObject/NoExportTypes.h"
#include "KoratControlRigSocketInfo.h"
#include "KoratRigUnit_GetSocketTransform.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_GetSocketTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratControlRigSocketInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneGetterSetterMode Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedIndex;
    
    KORATCONTROLRIGEXTENSION_API FKoratRigUnit_GetSocketTransform();

	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;
};

