#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AlpakitSettings.generated.h"

UENUM()
enum class EAlpakitStartGameType : uint8 {
    NONE UMETA(DisplayName = "Do not launch"),
    STEAM UMETA(DisplayName = "Steam"),
};

UCLASS(config=Game)
class ALPAKIT_API UAlpakitSettings : public UObject {
    GENERATED_BODY()
public:
    /** Retrieves global instance of alpakit settings */
    static UAlpakitSettings* Get();

    /** Saves alpakit settings to configuration file */
    void SaveSettings();

    UPROPERTY(EditAnywhere, config, Category = Config)
    FDirectoryPath SparkingZEROGamePath;

    UPROPERTY(EditAnywhere, config, Category = Config)
    EAlpakitStartGameType LaunchGameAfterPacking;

    UPROPERTY(EditAnywhere, config, Category = Config)
    bool bCopyModsToGame = false;

    UPROPERTY(BlueprintReadOnly, config, Category = Config)
    TMap<FString, bool> ModSelection;
};
