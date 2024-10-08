#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratBattlePlayMap.h"
#include "SSDBGACT_MenuWindow.generated.h"

class USSDBGACT_CharacterDataAsset;
class USSLoggingToolSettingDataAsset;

UCLASS(Blueprintable)
class ASSDBGACT_MenuWindow : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDBGACT_CharacterDataAsset* Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSLoggingToolSettingDataAsset* LoggingToolDataAsset;
    
public:
    ASSDBGACT_MenuWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAgingReplayLoop(bool bInLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetAgingReplayDataList(const int32 InUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecute(const FName& InMode, const FKoratBattlePlayMap& InMap, const bool IsEnableAutoGuard, const bool IsSparkingMode, const bool IsEnableChange2PCharacter, const FString& InCharacterIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void AddSkipReplay(const FString& InReplay);
    
};

