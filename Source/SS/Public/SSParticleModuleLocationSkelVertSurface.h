#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationSkelVertSurface.h"
#include "SSParticleModuleLocationSkelVertSurface.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSParticleModuleLocationSkelVertSurface : public UParticleModuleLocationSkelVertSurface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSkeletalMeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetMaterialIndexInstanceName;
    
public:
    USSParticleModuleLocationSkelVertSurface();

};

