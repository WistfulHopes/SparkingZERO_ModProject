#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSEffectUpdateToonPointLightParam.h"
#include "SSToonLightingInterface.h"
#include "SSToonShadingSetting.h"
#include "SSToonPropActor.generated.h"

UCLASS(Blueprintable)
class ASSToonPropActor : public AActor, public ISSToonLightingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSToonShadingSetting ToonMeshSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEffectUpdateToonPointLightParam ReadOnlyLightContext;
    
public:
    ASSToonPropActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

