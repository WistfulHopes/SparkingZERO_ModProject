#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "ESpLocationStaticVertSurfaceSource.h"
#include "SpParticleModuleLocationStaticVertSurface.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SPRUNTIME_API USpParticleModuleLocationStaticVertSurface : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESpLocationStaticVertSurfaceSource> SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UniversalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdatePositionEachFrame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOrientMeshEmitters: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticMeshActorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnforceNormalCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NormalToCompare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalCheckToleranceDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalCheckTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ValidMaterialIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInheritVertexColor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInheritUV: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InheritUVChannel;
    
    USpParticleModuleLocationStaticVertSurface();

};

