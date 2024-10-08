#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
#include "KoratRigUnit_MeshClippingCurve.h"
#include "KoratRigUnit_MeshClippingDefinition.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_MeshClippingDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement BoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratRigUnit_MeshClippingCurve> Curves;
    
    SS_API FKoratRigUnit_MeshClippingDefinition();
};

