#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationBoneSocket.h"
#include "SSParticleModuleLocationBoneSocket.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSParticleModuleLocationBoneSocket : public UParticleModuleLocationBoneSocket {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetSkeletalMeshComponentName;
    
public:
    USSParticleModuleLocationBoneSocket();

};

