#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratTimeScaleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratTimeScaleComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTimeScaleMode;
    
public:
    UKoratTimeScaleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateTimeScale(const float InTimeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartTimeScale(const float InTimeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndTimeScale(const float InTimeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimeScaling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectiveTimeDilation() const;
    
};

