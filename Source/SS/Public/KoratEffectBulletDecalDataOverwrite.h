#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletDecalDataOverwrite.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FKoratEffectBulletDecalDataOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BurnMarkMaterial;
    
    SS_API FKoratEffectBulletDecalDataOverwrite();
};

