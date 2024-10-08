#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratDebugDecalActorManagerDataAsset.generated.h"

class ASSEffectDecalActor;
class UMaterialInterface;

UCLASS(Blueprintable)
class UKoratDebugDecalActorManagerDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSEffectDecalActor> DecalBPLevelSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSEffectDecalActor> DecalBPBulletRat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialLevelSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialBulletRat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetFromEffectBulletDecalAndKnockData;
    
public:
    UKoratDebugDecalActorManagerDataAsset();

};

