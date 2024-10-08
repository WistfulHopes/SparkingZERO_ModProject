#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSPaperTheaterMoviePlane.generated.h"

class UManaTexture;
class UMaterialInterface;
class UMediaTexture;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASSPaperTheaterMoviePlane : public AActor {
    GENERATED_BODY()
public:
    ASSPaperTheaterMoviePlane(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UStaticMeshComponent* GetPlaneMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMediaTexture* GetMediaTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMaterialInterface* GetMaterialInterface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UManaTexture* GetManaTexture() const;
    
};

