#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "SSAnimNotify_PlayParticleEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USSAnimNotify_PlayParticleEffect : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ParameterColor;
    
public:
    USSAnimNotify_PlayParticleEffect();

};

