#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "KoratRigUnit_SphereTraceWorld.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_SphereTraceWorld : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector END;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, Input))
    TEnumAsByte<ECollisionChannel> Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitNormal;
    
	KORATCONTROLRIGEXTENSION_API FKoratRigUnit_SphereTraceWorld();
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;
};

