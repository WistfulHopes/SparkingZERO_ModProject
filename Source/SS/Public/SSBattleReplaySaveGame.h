#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "DebugReplayUIInfo.h"
#include "SSReplayBattleData.h"
#include "SSReplayBattleEtcData.h"
#include "SSReplayDataBattleSetting.h"
#include "SSReplayDataUIInfo.h"
#include "SSBattleReplaySaveGame.generated.h"

class UObject;

UCLASS(Blueprintable)
class USSBattleReplaySaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSReplayDataUIInfo UISelectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSReplayDataBattleSetting ReplayBattleSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FSSReplayBattleData> BattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSReplayBattleEtcData TempEtcData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ErrorLoggingArray;
    
    USSBattleReplaySaveGame();

    UFUNCTION(BlueprintCallable)
    void GetReplayWorldLocation(int32 PlaySideCommon, TArray<FTransform>& Transform1P, TArray<FTransform>& Transform2P);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetDebugReplayUIInfo(UObject* WorldContextObject, int32 PlaySideCommon, FDebugReplayUIInfo& DebugReplayUIInfo);
    
};

