#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbResourcesAssetRecord.generated.h"

class UMaterialInterface;
class UParticleSystem;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FKoratInteractAtbResourcesAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> SkeletalMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UParticleSystem>> ParticleList;
    
    SS_API FKoratInteractAtbResourcesAssetRecord();
};

