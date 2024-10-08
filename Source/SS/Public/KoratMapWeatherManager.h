#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EKoratWeatherModeState.h"
#include "KoratMapWeatherManager.generated.h"

class UKoratMapWeatherDataAsset;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class UKoratMapWeatherManager : public UEngineSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMapWeatherDataAsset* MasterAsset;
    
public:
    UKoratMapWeatherManager();

    UFUNCTION(BlueprintCallable)
    void UpdateParameter(UWorld* World, EKoratWeatherModeState oldState, EKoratWeatherModeState NewState, float Rate);
    
};

