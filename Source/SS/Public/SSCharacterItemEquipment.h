#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterWinType.h"
#include "KoratActionDataList.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "SSCharacterItemEffectStateElement.h"
#include "SSCharacterItemEquipmentSetting.h"
#include "SSCharacterItemSaveState.h"
#include "SSCharacterItemEquipment.generated.h"

class UKoratBuffPhaseDataAsset;
class UKoratMLSDataAsset;
class ULevelSequence;
class USSBlastForteDataAsset;
class USSBlastSkillDataAsset;
class USSBlastUltimateDataAsset;
class USSCharacterItemEquipment;
class USSCharacterRaderChart;
class UWorld;

UCLASS(Blueprintable)
class USSCharacterItemEquipment : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* EnemyItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FSSCharacterItemEffectStateElement> ItemsEffectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterItemDataList, FSSCharacterItemSaveState> ItemSaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> LevelSequenceWaitingForPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UKoratBuffPhaseDataAsset*> AddBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterRaderChart* CharacterRaderChart;
    
public:
    USSCharacterItemEquipment();

    UFUNCTION(BlueprintCallable)
    void UnequipSameItemAll(const TArray<FKoratCharacterItemDataList>& InItems);
    
    UFUNCTION(BlueprintCallable)
    void UnequipItemsByIndexes(const TArray<int32>& InIndexes);
    
    UFUNCTION(BlueprintCallable)
    void UnequipItemByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void UnequipItem(const FKoratCharacterItemDataList& InItem);
    
    UFUNCTION(BlueprintCallable)
    void UnequipAllItem();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetUpWithSetting(const FSSCharacterItemEquipmentSetting& InSetting, const TArray<FKoratCharacterItemDataList>& InEquipItems);
    
public:
    UFUNCTION(BlueprintCallable)
    void Setup(FKoratCharacterDataList InCharacter, const TArray<FKoratCharacterItemDataList>& InEquipItems, bool bInEnableEffectList);
    
    UFUNCTION(BlueprintCallable)
    void SetItemEquipmentOutIndexes(const TArray<FKoratCharacterItemDataList>& InEquipItems, TArray<int32>& OutIndexes);
    
    UFUNCTION(BlueprintCallable)
    void SetItemEquipment(const TArray<FKoratCharacterItemDataList>& InEquipItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFormChangeCharacter(TArray<FKoratCharacterDataList>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratCharacterItemDataList> GetEquipItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomizeActionVoiceText(const FKoratActionDataList InAction, ECharacterWinType InWinType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomizeActionVoice(const FKoratActionDataList InAction, ECharacterWinType InWinType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKoratMLSDataAsset* GetCustomizeActionMLS(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterCostumeDataList GetCostume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBlastUltimateDataAsset* GetBlastUltimateData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBlastSkillDataAsset* GetBlastSkill2Data() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBlastSkillDataAsset* GetBlastSkill1Data() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBlastForteDataAsset* GetBlastForte2Data() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBlastForteDataAsset* GetBlastForte1Data() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FusionCombine(const TArray<FKoratCharacterItemDataList>& InBeforeBattleCharacterItem, const TArray<FKoratCharacterItemDataList>& InBeforeBenchCharacterItem, const FKoratCharacterDataList& InBeforeCharacter, const TArray<FKoratCharacterItemDataList>& InAfterCharacterItem, const FKoratCharacterDataList& InAfterCharacter, TArray<FKoratCharacterItemDataList>& OutCombinedEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FormChangeCombine(const TArray<FKoratCharacterItemDataList>& InBeforeCharacterItem, const FKoratCharacterDataList& InBeforeCharacter, const TArray<FKoratCharacterItemDataList>& InAfterCharacterItem, const FKoratCharacterDataList& InAfterCharacter, bool bInKeepCostume, bool bInKeepCostumeID, TArray<FKoratCharacterItemDataList>& OutCombinedEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FindCustomizeActionVoiceText(const TArray<FKoratCharacterItemDataList>& InItems, const FKoratActionDataList& InAction, ECharacterWinType InWinType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindCustomizeActionVoice(const TArray<FKoratCharacterItemDataList>& InItems, const FKoratActionDataList& InAction, ECharacterWinType InWinType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UKoratMLSDataAsset* FindCustomizeActionMLS(const FKoratCharacterDataList& InCharacter, const TArray<FKoratCharacterItemDataList>& InItems, const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable)
    void EquipItemsOutIndexes(const TArray<FKoratCharacterItemDataList>& InEquipItems, TArray<int32>& OutIndexes);
    
    UFUNCTION(BlueprintCallable)
    void EquipItems(const TArray<FKoratCharacterItemDataList>& InEquipItems);
    
    UFUNCTION(BlueprintCallable)
    int32 EquipItem(const FKoratCharacterItemDataList& InItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKoratCharacterCostumeDataList DecideCostume(FKoratCharacterDataList InCharacter, const TArray<FKoratCharacterItemDataList>& InEquipItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DebugDraw(const UWorld* InWorld, const FVector& InPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcRadarChartParameter(TArray<float>& OutRadarChartParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcFormChangeCharacter(FKoratCharacterDataList InCharacter, const TArray<FKoratCharacterItemDataList>& InEquipItems, TArray<FKoratCharacterDataList>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcCharacterDefalutRadarChartParameter(TArray<float>& OutRadarChartParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BodyChangeCombine(const TArray<FKoratCharacterItemDataList>& InSoulCharacterItem, const TArray<FKoratCharacterItemDataList>& InBodyCharacterItem, TArray<FKoratCharacterItemDataList>& OutCombinedEquipment);
    
};

