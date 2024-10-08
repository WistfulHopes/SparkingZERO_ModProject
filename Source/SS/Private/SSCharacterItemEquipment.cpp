#include "SSCharacterItemEquipment.h"

USSCharacterItemEquipment::USSCharacterItemEquipment() {
    this->EnemyItemEquipment = NULL;
    this->CharacterRaderChart = NULL;
}

void USSCharacterItemEquipment::UnequipSameItemAll(const TArray<FKoratCharacterItemDataList>& InItems) {
}

void USSCharacterItemEquipment::UnequipItemsByIndexes(const TArray<int32>& InIndexes) {
}

void USSCharacterItemEquipment::UnequipItemByIndex(int32 InIndex) {
}

void USSCharacterItemEquipment::UnequipItem(const FKoratCharacterItemDataList& InItem) {
}

void USSCharacterItemEquipment::UnequipAllItem() {
}

void USSCharacterItemEquipment::SetUpWithSetting(const FSSCharacterItemEquipmentSetting& InSetting, const TArray<FKoratCharacterItemDataList>& InEquipItems) {
}

void USSCharacterItemEquipment::Setup(FKoratCharacterDataList InCharacter, const TArray<FKoratCharacterItemDataList>& InEquipItems, bool bInEnableEffectList) {
}

void USSCharacterItemEquipment::SetItemEquipmentOutIndexes(const TArray<FKoratCharacterItemDataList>& InEquipItems, TArray<int32>& OutIndexes) {
}

void USSCharacterItemEquipment::SetItemEquipment(const TArray<FKoratCharacterItemDataList>& InEquipItems) {
}

void USSCharacterItemEquipment::GetFormChangeCharacter(TArray<FKoratCharacterDataList>& OutCharacters) {
}

TArray<FKoratCharacterItemDataList> USSCharacterItemEquipment::GetEquipItems() const {
    return TArray<FKoratCharacterItemDataList>();
}

FText USSCharacterItemEquipment::GetCustomizeActionVoiceText(const FKoratActionDataList InAction, ECharacterWinType InWinType) const {
    return FText::GetEmpty();
}

int32 USSCharacterItemEquipment::GetCustomizeActionVoice(const FKoratActionDataList InAction, ECharacterWinType InWinType) const {
    return 0;
}

UKoratMLSDataAsset* USSCharacterItemEquipment::GetCustomizeActionMLS(const FKoratActionDataList InAction) const {
    return NULL;
}

FKoratCharacterCostumeDataList USSCharacterItemEquipment::GetCostume() const {
    return FKoratCharacterCostumeDataList{};
}

USSBlastUltimateDataAsset* USSCharacterItemEquipment::GetBlastUltimateData() const {
    return NULL;
}

USSBlastSkillDataAsset* USSCharacterItemEquipment::GetBlastSkill2Data() const {
    return NULL;
}

USSBlastSkillDataAsset* USSCharacterItemEquipment::GetBlastSkill1Data() const {
    return NULL;
}

USSBlastForteDataAsset* USSCharacterItemEquipment::GetBlastForte2Data() const {
    return NULL;
}

USSBlastForteDataAsset* USSCharacterItemEquipment::GetBlastForte1Data() const {
    return NULL;
}

void USSCharacterItemEquipment::FusionCombine(const TArray<FKoratCharacterItemDataList>& InBeforeBattleCharacterItem, const TArray<FKoratCharacterItemDataList>& InBeforeBenchCharacterItem, const FKoratCharacterDataList& InBeforeCharacter, const TArray<FKoratCharacterItemDataList>& InAfterCharacterItem, const FKoratCharacterDataList& InAfterCharacter, TArray<FKoratCharacterItemDataList>& OutCombinedEquipment) {
}

void USSCharacterItemEquipment::FormChangeCombine(const TArray<FKoratCharacterItemDataList>& InBeforeCharacterItem, const FKoratCharacterDataList& InBeforeCharacter, const TArray<FKoratCharacterItemDataList>& InAfterCharacterItem, const FKoratCharacterDataList& InAfterCharacter, bool bInKeepCostume, bool bInKeepCostumeID, TArray<FKoratCharacterItemDataList>& OutCombinedEquipment) {
}

FText USSCharacterItemEquipment::FindCustomizeActionVoiceText(const TArray<FKoratCharacterItemDataList>& InItems, const FKoratActionDataList& InAction, ECharacterWinType InWinType) {
    return FText::GetEmpty();
}

int32 USSCharacterItemEquipment::FindCustomizeActionVoice(const TArray<FKoratCharacterItemDataList>& InItems, const FKoratActionDataList& InAction, ECharacterWinType InWinType) {
    return 0;
}

UKoratMLSDataAsset* USSCharacterItemEquipment::FindCustomizeActionMLS(const FKoratCharacterDataList& InCharacter, const TArray<FKoratCharacterItemDataList>& InItems, const FKoratActionDataList& InAction) {
    return NULL;
}

void USSCharacterItemEquipment::EquipItemsOutIndexes(const TArray<FKoratCharacterItemDataList>& InEquipItems, TArray<int32>& OutIndexes) {
}

void USSCharacterItemEquipment::EquipItems(const TArray<FKoratCharacterItemDataList>& InEquipItems) {
}

int32 USSCharacterItemEquipment::EquipItem(const FKoratCharacterItemDataList& InItem) {
    return 0;
}

FKoratCharacterCostumeDataList USSCharacterItemEquipment::DecideCostume(FKoratCharacterDataList InCharacter, const TArray<FKoratCharacterItemDataList>& InEquipItems) {
    return FKoratCharacterCostumeDataList{};
}

void USSCharacterItemEquipment::DebugDraw(const UWorld* InWorld, const FVector& InPos) const {
}

void USSCharacterItemEquipment::CalcRadarChartParameter(TArray<float>& OutRadarChartParam) {
}

void USSCharacterItemEquipment::CalcFormChangeCharacter(FKoratCharacterDataList InCharacter, const TArray<FKoratCharacterItemDataList>& InEquipItems, TArray<FKoratCharacterDataList>& OutCharacters) {
}

void USSCharacterItemEquipment::CalcCharacterDefalutRadarChartParameter(TArray<float>& OutRadarChartParam) {
}

void USSCharacterItemEquipment::BodyChangeCombine(const TArray<FKoratCharacterItemDataList>& InSoulCharacterItem, const TArray<FKoratCharacterItemDataList>& InBodyCharacterItem, TArray<FKoratCharacterItemDataList>& OutCombinedEquipment) {
}


