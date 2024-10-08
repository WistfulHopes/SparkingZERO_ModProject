#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratGrassTransformParameter.h"
#include "KoratGrassTransformer.generated.h"

class UKoratInteractiveFoliageComponent;

UCLASS(Blueprintable)
class AKoratGrassTransformer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractiveFoliageComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratGrassTransformParameter> TransformParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveGrassFreshlyDeformedWhenStopUpdateInstance;
    
    AKoratGrassTransformer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopUpdateManagement();
    
    UFUNCTION(BlueprintCallable)
    void StopUpdateInstance(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartUpdateManagement();
    
    UFUNCTION(BlueprintCallable)
    void StartUpdate();
    
};

