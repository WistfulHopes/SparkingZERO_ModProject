#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
#include "Units/RigUnit.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "KoratControlRigTraceResult.h"
#include "KoratRigUnit_MathFootIK_CalcFootIK.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_MathFootIK_CalcFootIK : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CharacterSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Effector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnkleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratControlRigTraceResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTranslateNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TranslateNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitAngleDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaistMovement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedIndex;
    
public:
    KORATCONTROLRIGEXTENSION_API FKoratRigUnit_MathFootIK_CalcFootIK();
};

