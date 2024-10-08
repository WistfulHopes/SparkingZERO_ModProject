#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EKoratBattleKeyMode.h"
#include "KoratCharacterDataList.h"
#include "SSMatchingBlueprintInterface.generated.h"

UCLASS(Blueprintable)
class SS_API USSMatchingBlueprintInterface : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USSMatchingBlueprintInterface();

    UFUNCTION(BlueprintCallable)
    static void StartPlayerMatchJoinRoom();
    
    UFUNCTION(BlueprintCallable)
    static void StartPlayerMatchCreateRoom();
    
    UFUNCTION(BlueprintCallable)
    static void StartOnlineEnable(bool InLoginToServer, bool InMatchingEnable);
    
    UFUNCTION(BlueprintCallable)
    static void StartMatchingRankMatch();
    
    UFUNCTION(BlueprintCallable)
    static void StartMatching(const FString& InRequestedMap, const FString& InChara);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineBattleSettingToGameInstance();
    
    UFUNCTION(BlueprintCallable)
    static bool SetMatchingTeamCharacterName(FKoratCharacterDataList In1p0, FKoratCharacterDataList In1p1, FKoratCharacterDataList In1p2, FKoratCharacterDataList In1p3, FKoratCharacterDataList In1p4);
    
    UFUNCTION(BlueprintCallable)
    static void SetMatchingRoomRerunDummyOpponentChara(const FString& InChara);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMatchingRoomMyChara(const FString& InChara);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMatchingRoomMeReady();
    
    UFUNCTION(BlueprintCallable)
    static bool SetMatchingRoomMeIdle();
    
    UFUNCTION(BlueprintCallable)
    static bool SetMatchingRoomMap(const FString& InMap);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerMatchJoinRoomSuccess();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerMatchJoinRoomRunning();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerMatchCreateRoomSuccess();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerMatchCreateRoomRunning();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOnlineEnableRunning();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMyMatchingRoomMemberStatePastIdle();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMatchingRunning();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMatchingRoomStatePastIdle();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInMatchingRoom();
    
    UFUNCTION(BlueprintCallable)
    static bool GetMatchingRoomStateString(FString& OutMessage);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMatchingRoomSlaveChara(FString& OutChara);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMatchingRoomMasterChara(FString& OutChara);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMatchingRoomMap(FString& OutMap);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMatchingRoomBattleKeyMode(EKoratBattleKeyMode& OutBattleKeyMode);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMatchingResult(FString& OutMessage);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMatchingJobStateString(FString& OutMessage);
    
    UFUNCTION(BlueprintCallable)
    static void CancelAndResetMatching();
    
    UFUNCTION(BlueprintCallable)
    static bool AmIMatchingRoomOwner();
    
};

