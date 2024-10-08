#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDebugOnlineBtl_AiType.h"
#include "EDebugOnlineBtl_BattleLogType.h"
#include "EDebugOnlineBtl_MatchType.h"
#include "EDebugOnlineBtl_NetStressType.h"
#include "EDebugOnlineBtl_ServerApiType.h"
#include "EDebugOnlineBtl_TimeLimitType.h"
#include "KoratBattlePlayMap.h"
#include "KoratCharacterDataList.h"
#include "SSDebugOnlineBtlTest_MenuWindow.generated.h"

class USSDBGACT_CharacterDataAsset;

UCLASS(Blueprintable)
class ASSDebugOnlineBtlTest_MenuWindow : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDBGACT_CharacterDataAsset* Characters;
    
public:
    ASSDebugOnlineBtlTest_MenuWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAgingReplayDataList(const int32 InUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveSetting();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecute(const EDebugOnlineBtl_MatchType& InMatchType, const EDebugOnlineBtl_BattleLogType& InBattleLogType, const EDebugOnlineBtl_TimeLimitType& InTimeLimitType, const EDebugOnlineBtl_ServerApiType& InServerApiType, const EDebugOnlineBtl_AiType& InAiType, const EDebugOnlineBtl_NetStressType& InNetStressType, const FKoratBattlePlayMap& InMap, const TArray<FKoratCharacterDataList>& InCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    FString GetLogSetCommand(EDebugOnlineBtl_BattleLogType logType);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

