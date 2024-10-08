#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "KoratPostProcessWorldToScreenComponent.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratPostProcessWorldToScreenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> LocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerIndex;
    
    UKoratPostProcessWorldToScreenComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNormalizeScreenLocationWithDistance(FVector& OutScreenLocation) const;
    
};

