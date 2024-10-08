#include "SSAiBTDecoratorUtilityComponent.h"

USSAiBTDecoratorUtilityComponent::USSAiBTDecoratorUtilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USSAiBTDecoratorUtilityComponent::SetupOverriteCoolDownTimeDefenseCpp(const FKoratAiDefenseProbabilityTypeDataList& InDefenseProbabilityTypeDataList, const bool InProbabilityResult) {
}

void USSAiBTDecoratorUtilityComponent::SetupOverriteCoolDownTimeCpp(const FKoratAiProbabilityTypeDataList& InProbabilityTypeDataList, const bool InProbabilityResult) {
}

void USSAiBTDecoratorUtilityComponent::SetProbabilityCalculation(const FString& InDecoratorName, const FSSAiProbabilityCalculation& InBuffer) {
}

void USSAiBTDecoratorUtilityComponent::SetProbability(const int32 InValue) {
}

void USSAiBTDecoratorUtilityComponent::SetConditionResults(const FString& InNodeName, const bool InCondition) {
}

void USSAiBTDecoratorUtilityComponent::SetConditionCheck(const bool InCheck) {
}

void USSAiBTDecoratorUtilityComponent::ResetUserTimer(const FString& InKey) {
}

void USSAiBTDecoratorUtilityComponent::ResetProbabilityCalculation() {
}

void USSAiBTDecoratorUtilityComponent::RemoveProbabilityCalculation(const FString& InDecoratorName) {
}


bool USSAiBTDecoratorUtilityComponent::IsYawCpp(const UBTDecorator* InMyDecorator, const bool InIsMore, const float InYawToTarget) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsUsableDecorator(const ESSAiUsableDecoratorType InType, const TArray<FName> InCommandIds) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsUsableBlastCpp(const UBTDecorator* InMyDecorator, const FKoratAiBlastTypeDataList& InBlastTypeDataList) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsTargetUpOrDownCpp(const UBTDecorator* InMyDecorator, const bool InIsTargetGiant, const bool InIsMyselfHighPosition) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsSkillStockCpp(const UBTDecorator* InMyDecorator, const int32 InSkillStockNum, const bool InIsMore, const bool InIsMyself) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsSectionNameCpp(const UBTDecorator* InMyDecorator, const FName InActionName, const TArray<FName> InSectionNames, const bool InIsMyself) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsRemainingHitPointCpp(const UBTDecorator* InMyDecorator, const float InRate, const bool InIsMore, const bool InIs1P) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsRemainingEnergyCpp(const UBTDecorator* InMyDecorator, const float InRate, const bool InIsMore, const bool InIs1P) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsPlayerSideCpp(const UBTDecorator* InMyDecorator, const bool InIs1P) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsPitchCpp(const UBTDecorator* InMyDecorator, const bool InIsMore, const float InPitchToTarget) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsObstacleCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsMovableDirectionCpp(const UBTDecorator* InMyDecorator, const EAiCheckMoveDirectionType InDirectionType) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsMapOutSideCpp(const UBTDecorator* InMyDecorator, const bool InIsMyself, const float InOuterCircumferenceRate) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsMapIDCpp(const UBTDecorator* InMyDecorator, const TArray<FKoratMapDataList>& InMapIds) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsLowerPriorityCheckGroupCpp(const UBTDecorator* InMyDecorator, const int32 InGroupId) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsLastSiblingDecorator(const UBTDecorator* InMyDecorator, const UClass* InSearchClass) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsItemEquipped(const FKoratCharacterItemDataList& InItemDataList) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsGroundStatusCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsGroundDistanceCpp(const UBTDecorator* InMyDecorator, const float InGroundDistance, const bool InIsLess) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsGiantCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsFirstSiblingDecorator(const UBTDecorator* InMyDecorator, const UClass* InSearchClass) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsFinishedUserTimer(const FString& InKey) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsFigureTypeCpp(const UBTDecorator* InMyDecorator, const FKoratCharacterFigureDataList& InFigureDataList, const bool InIsMyself) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsExistUserTimerKey(const FString& InKey) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsElapsedTimeCpp(const UBTDecorator* InMyDecorator, const FString& InTimerName, const float InTargetTime) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsDistanceCpp(const UBTDecorator* InMyDecorator, const float InDistance, const bool InIsClose) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsDestructibleObstacleCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsDerivativeActionCpp(const UBTDecorator* InMyDecorator, const EAiRushDerivedActionType InDerivedType, const FKoratReplaceTransitionActionDataList InTimingTypeDataList) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsCoolTimeSafeCpp(const UBTDecorator* InMyDecorator, const TArray<FName>& InCommandIds) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsCoolTime(const TArray<FName> InCommandIds) {
    return false;
}

ESSAiNodeConditionResultType USSAiBTDecoratorUtilityComponent::IsConditionResults(const FString& InNodeName) {
    return ESSAiNodeConditionResultType::None;
}

bool USSAiBTDecoratorUtilityComponent::IsCharacterIdCpp(const UBTDecorator* InMyDecorator, const TArray<FKoratCharacterDataList>& InCharacterDataListArray, const bool InIsChoice, const bool InIsMyself) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsBtdLog() {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsBlackboardCpp(const UBTDecorator* InMyDecorator, const TArray<FBlackboardKeySelector>& InBlackboardSelectors) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsBeginActionCpp(const UBTDecorator* InMyDecorator, const TArray<FName>& InActionNames, const bool InIsMyself) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsAiTypeCpp(const UBTDecorator* InMyDecorator, const TArray<FKoratAiTypeDataList>& InAiTypes) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsAiPausedCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsActiveCommandCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsActionToStopThinkingCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsActionTimeCpp(const UBTDecorator* InMyDecorator, const TArray<FName>& InActionNames, const bool InIsMyself, const float InTime) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsActionNameCpp(const UBTDecorator* InMyDecorator, const TArray<FName>& InActionNames, const bool InIsDuring, const bool InIsMyself) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsActionFlagCpp(const UBTDecorator* InMyDecorator, const FKoratCharacterDataActionFlag& InActionFlag) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::IsActionFlag(const FKoratCharacterDataActionFlag& NewIsActionFlag) {
    return false;
}

float USSAiBTDecoratorUtilityComponent::GetUserTimer(const FString& InKey) {
    return 0.0f;
}

FString USSAiBTDecoratorUtilityComponent::GetTreeNameFromTask(const UBTTaskNode* InTask) {
    return TEXT("");
}

FString USSAiBTDecoratorUtilityComponent::GetTreeName(const UBTDecorator* InMyDecorator) {
    return TEXT("");
}

int32 USSAiBTDecoratorUtilityComponent::GetSparkingComboBlastIndex(const EAiSparkingComboRemainingHpType InRemainingHpType) {
    return 0;
}

void USSAiBTDecoratorUtilityComponent::GetSiblingDecorator(const UBTDecorator* InMyDecorator, const UClass* InSearchClass, TArray<UBTDecorator*>& OutSiblingDecorator) {
}

void USSAiBTDecoratorUtilityComponent::GetProbabilityLearningObstructionFailureCpp(const bool Invalid, const UCurveFloat* InObstructionFailureCurve, int32& OutProbabilityMin, int32& OutProbabilityMax) {
}

void USSAiBTDecoratorUtilityComponent::GetProbabilityLearningDefenseDirectionCpp(const FKoratAiDefenseProbabilityTypeDataList& InDefenseProbabilityTypeDataList, int32& OutProbabilityMin, int32& OutProbabilityMax) {
}

void USSAiBTDecoratorUtilityComponent::GetProbabilityLearningAttackFailureCpp(const FName InScheduleCommandId, const UCurveFloat* InAttackFailureCurve, int32& OutProbabilityMin, int32& OutProbabilityMax) {
}

void USSAiBTDecoratorUtilityComponent::GetProbabilityItemAdditionCpp(const TArray<FKoratCharacterItemDataList>& InItemList, int32& OutProbabilityMin, int32& OutProbabilityMax) {
}

void USSAiBTDecoratorUtilityComponent::GetProbabilityEmotionalAdditionCpp(const TArray<FSSAiBpEmotionParam>& InEmotionParams, int32& OutProbabilityMin, int32& OutProbabilityMax) {
}


bool USSAiBTDecoratorUtilityComponent::GetProbabilityConditionCheckCpp(const UBTDecorator* InMyDecorator, const UClass* InProbabilityBaseClass, const UClass* InBtdBaseClass) {
    return false;
}

void USSAiBTDecoratorUtilityComponent::GetProbabilityCalculation(const FString& InDecoratorName, FSSAiProbabilityCalculation& OutBuffer) {
}

FString USSAiBTDecoratorUtilityComponent::GetFlowAbortMode(const UBTDecorator* InMyDecorator) {
    return TEXT("");
}

float USSAiBTDecoratorUtilityComponent::GetFloorDistance() {
    return 0.0f;
}

UBTDecorator* USSAiBTDecoratorUtilityComponent::GetFirstSiblingDecorator(const UBTDecorator* InMyDecorator, const UClass* InSearchClass) {
    return NULL;
}

int32 USSAiBTDecoratorUtilityComponent::GetExecutionIndex(const UBTDecorator* InMyDecorator) {
    return 0;
}

void USSAiBTDecoratorUtilityComponent::GetDecoratorsInTheSameCompositeNode(const UBTDecorator* InMyDecorator, const UClass* InSearchClass, TArray<UBTDecorator*>& OutDecorators) {
}

FString USSAiBTDecoratorUtilityComponent::GetDecoratorName(const UBTDecorator* InMyDecorator) {
    return TEXT("");
}

FString USSAiBTDecoratorUtilityComponent::GetCurrentTreeName() {
    return TEXT("");
}

int32 USSAiBTDecoratorUtilityComponent::GetBranchWithLevelProbabilityCpp(const UBTDecorator* InMyDecorator, const int32 InProbabilityMin, const int32 InProbabilityMax, const UCurveFloat* InLvCurve, const TArray<FSSAiBpEmotionParam>& InEmotionParams, const FName InScheduleCommandId, const UCurveFloat* InAttackFailureCurve, const bool InValidObstructionFailure, const UCurveFloat* InObstructionFailureCurve, const TArray<FKoratCharacterItemDataList>& InItemList, const bool bSendLog) {
    return 0;
}

int32 USSAiBTDecoratorUtilityComponent::GetBranchWithDefenseProbabilityCpp(const UBTDecorator* InMyDecorator, const FKoratAiDefenseProbabilityTypeDataList& InDefenseProbabilityTypeDataList, const TArray<FSSAiBpEmotionParam>& InEmotionParams, const TArray<FKoratCharacterItemDataList>& InItemList) {
    return 0;
}

int32 USSAiBTDecoratorUtilityComponent::GetBranchWithAssetProbabilityCpp(const UBTDecorator* InMyDecorator, const FKoratAiProbabilityTypeDataList& InProbabilityTypeDataList, const TArray<FSSAiBpEmotionParam>& InEmotionParams, const FName InScheduleCommandId, const UCurveFloat* InAttackFailureCurve, const bool InValidObstructionFailure, const UCurveFloat* InObstructionFailureCurve, const TArray<FKoratCharacterItemDataList>& InItemList, const bool bSendLog) {
    return 0;
}

bool USSAiBTDecoratorUtilityComponent::GetAreaRadiusCenter(float& OutRadius, FVector& OutCenter) {
    return false;
}

FKoratActionDataList USSAiBTDecoratorUtilityComponent::GetActionDerived(const FKoratReplaceTransitionActionDataList& InTransitionAction) {
    return FKoratActionDataList{};
}

void USSAiBTDecoratorUtilityComponent::DrawLotsCpp(const int32 InMaxProbability, const FString& InFirstDecoratorName) {
}

bool USSAiBTDecoratorUtilityComponent::DoesNavDataExistCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanPotaraFusionCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanPotaraCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanFusionCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanFormChangeCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanFlyCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanFinishCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanCharacterChangeCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanAiRunCpp(const UBTDecorator* InMyDecorator) {
    return false;
}

bool USSAiBTDecoratorUtilityComponent::CanActionDerivedTypeCpp(const UBTDecorator* InMyDecorator, const EAiRushDerivedActionType InDerivedType) {
    return false;
}

void USSAiBTDecoratorUtilityComponent::AddUserTimer(const FString& InKey, const float InTargetTime) {
}


