#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EKoratCharacterActionFinishReason.h"
#include "KoratActionDataList.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratCharacterDataList.h"
#include "SSLoggingToolSettingDataAssetRecord.h"
#include "SSLoggingToolManager.generated.h"

UCLASS(Blueprintable)
class USSLoggingToolManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSLoggingToolSettingDataAssetRecord> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattlePlayCharacter> TargetCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAutoGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSprakingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableChange2PCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartCharacterIndex;
    
public:
    USSLoggingToolManager();

    UFUNCTION(BlueprintCallable)
    void SetIsEnable(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnEndMontageSequence(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginMontageSequence(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void InitSettingCharacters(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsEnable();
    
};

