#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "EAiCheckMoveDirectionType.h"
#include "EAiRushDerivedActionType.h"
#include "EAiSparkingComboRemainingHpType.h"
#include "ESSAiNodeConditionResultType.h"
#include "ESSAiUsableDecoratorType.h"
#include "KoratActionDataList.h"
#include "KoratAiBlastTypeDataList.h"
#include "KoratAiDefenseProbabilityTypeDataList.h"
#include "KoratAiProbabilityTypeDataList.h"
#include "KoratAiTypeDataList.h"
#include "KoratCharacterDataActionFlag.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterFigureDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratMapDataList.h"
#include "KoratReplaceTransitionActionDataList.h"
#include "SSAiBpEmotionParam.h"
#include "SSAiProbabilityCalculation.h"
#include "SSAiUtilityComponent.h"
#include "SSAiBTDecoratorUtilityComponent.generated.h"

class AActor;
class UBTDecorator;
class UBTTaskNode;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAiBTDecoratorUtilityComponent : public USSAiUtilityComponent {
    GENERATED_BODY()
public:
    USSAiBTDecoratorUtilityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupOverriteCoolDownTimeDefenseCpp(const FKoratAiDefenseProbabilityTypeDataList& InDefenseProbabilityTypeDataList, const bool InProbabilityResult);
    
    UFUNCTION(BlueprintCallable)
    void SetupOverriteCoolDownTimeCpp(const FKoratAiProbabilityTypeDataList& InProbabilityTypeDataList, const bool InProbabilityResult);
    
    UFUNCTION(BlueprintCallable)
    void SetProbabilityCalculation(const FString& InDecoratorName, const FSSAiProbabilityCalculation& InBuffer);
    
    UFUNCTION(BlueprintCallable)
    void SetProbability(const int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionResults(const FString& InNodeName, const bool InCondition);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionCheck(const bool InCheck);
    
    UFUNCTION(BlueprintCallable)
    void ResetUserTimer(const FString& InKey);
    
    UFUNCTION(BlueprintCallable)
    void ResetProbabilityCalculation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveProbabilityCalculation(const FString& InDecoratorName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PublicPerformConditionCheckCpp(const UBTDecorator* InDecorator, AActor* InOwnerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsYawCpp(const UBTDecorator* InMyDecorator, const bool InIsMore, const float InYawToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsableDecorator(const ESSAiUsableDecoratorType InType, const TArray<FName> InCommandIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsableBlastCpp(const UBTDecorator* InMyDecorator, const FKoratAiBlastTypeDataList& InBlastTypeDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetUpOrDownCpp(const UBTDecorator* InMyDecorator, const bool InIsTargetGiant, const bool InIsMyselfHighPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillStockCpp(const UBTDecorator* InMyDecorator, const int32 InSkillStockNum, const bool InIsMore, const bool InIsMyself);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionNameCpp(const UBTDecorator* InMyDecorator, const FName InActionName, const TArray<FName> InSectionNames, const bool InIsMyself);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemainingHitPointCpp(const UBTDecorator* InMyDecorator, const float InRate, const bool InIsMore, const bool InIs1P);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemainingEnergyCpp(const UBTDecorator* InMyDecorator, const float InRate, const bool InIsMore, const bool InIs1P);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerSideCpp(const UBTDecorator* InMyDecorator, const bool InIs1P);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPitchCpp(const UBTDecorator* InMyDecorator, const bool InIsMore, const float InPitchToTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObstacleCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovableDirectionCpp(const UBTDecorator* InMyDecorator, const EAiCheckMoveDirectionType InDirectionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapOutSideCpp(const UBTDecorator* InMyDecorator, const bool InIsMyself, const float InOuterCircumferenceRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapIDCpp(const UBTDecorator* InMyDecorator, const TArray<FKoratMapDataList>& InMapIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLowerPriorityCheckGroupCpp(const UBTDecorator* InMyDecorator, const int32 InGroupId);
    
    UFUNCTION(BlueprintCallable)
    bool IsLastSiblingDecorator(const UBTDecorator* InMyDecorator, const UClass* InSearchClass);
    
    UFUNCTION(BlueprintCallable)
    bool IsItemEquipped(const FKoratCharacterItemDataList& InItemDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundStatusCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundDistanceCpp(const UBTDecorator* InMyDecorator, const float InGroundDistance, const bool InIsLess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGiantCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable)
    bool IsFirstSiblingDecorator(const UBTDecorator* InMyDecorator, const UClass* InSearchClass);
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishedUserTimer(const FString& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFigureTypeCpp(const UBTDecorator* InMyDecorator, const FKoratCharacterFigureDataList& InFigureDataList, const bool InIsMyself);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistUserTimerKey(const FString& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElapsedTimeCpp(const UBTDecorator* InMyDecorator, const FString& InTimerName, const float InTargetTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDistanceCpp(const UBTDecorator* InMyDecorator, const float InDistance, const bool InIsClose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestructibleObstacleCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDerivativeActionCpp(const UBTDecorator* InMyDecorator, const EAiRushDerivedActionType InDerivedType, const FKoratReplaceTransitionActionDataList InTimingTypeDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolTimeSafeCpp(const UBTDecorator* InMyDecorator, const TArray<FName>& InCommandIds);
    
    UFUNCTION(BlueprintCallable)
    bool IsCoolTime(const TArray<FName> InCommandIds);
    
    UFUNCTION(BlueprintCallable)
    ESSAiNodeConditionResultType IsConditionResults(const FString& InNodeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterIdCpp(const UBTDecorator* InMyDecorator, const TArray<FKoratCharacterDataList>& InCharacterDataListArray, const bool InIsChoice, const bool InIsMyself);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBtdLog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlackboardCpp(const UBTDecorator* InMyDecorator, const TArray<FBlackboardKeySelector>& InBlackboardSelectors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeginActionCpp(const UBTDecorator* InMyDecorator, const TArray<FName>& InActionNames, const bool InIsMyself);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiTypeCpp(const UBTDecorator* InMyDecorator, const TArray<FKoratAiTypeDataList>& InAiTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiPausedCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveCommandCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionToStopThinkingCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionTimeCpp(const UBTDecorator* InMyDecorator, const TArray<FName>& InActionNames, const bool InIsMyself, const float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionNameCpp(const UBTDecorator* InMyDecorator, const TArray<FName>& InActionNames, const bool InIsDuring, const bool InIsMyself);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionFlagCpp(const UBTDecorator* InMyDecorator, const FKoratCharacterDataActionFlag& InActionFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionFlag(const FKoratCharacterDataActionFlag& NewIsActionFlag);
    
    UFUNCTION(BlueprintCallable)
    float GetUserTimer(const FString& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTreeNameFromTask(const UBTTaskNode* InTask);
    
    UFUNCTION(BlueprintCallable)
    FString GetTreeName(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSparkingComboBlastIndex(const EAiSparkingComboRemainingHpType InRemainingHpType);
    
    UFUNCTION(BlueprintCallable)
    void GetSiblingDecorator(const UBTDecorator* InMyDecorator, const UClass* InSearchClass, TArray<UBTDecorator*>& OutSiblingDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProbabilityLearningObstructionFailureCpp(const bool Invalid, const UCurveFloat* InObstructionFailureCurve, int32& OutProbabilityMin, int32& OutProbabilityMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProbabilityLearningDefenseDirectionCpp(const FKoratAiDefenseProbabilityTypeDataList& InDefenseProbabilityTypeDataList, int32& OutProbabilityMin, int32& OutProbabilityMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProbabilityLearningAttackFailureCpp(const FName InScheduleCommandId, const UCurveFloat* InAttackFailureCurve, int32& OutProbabilityMin, int32& OutProbabilityMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProbabilityItemAdditionCpp(const TArray<FKoratCharacterItemDataList>& InItemList, int32& OutProbabilityMin, int32& OutProbabilityMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProbabilityEmotionalAdditionCpp(const TArray<FSSAiBpEmotionParam>& InEmotionParams, int32& OutProbabilityMin, int32& OutProbabilityMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetProbabilityCpp(const UBTDecorator* InDecorator, AActor* InOwnerController, const bool InSendLog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProbabilityConditionCheckCpp(const UBTDecorator* InMyDecorator, const UClass* InProbabilityBaseClass, const UClass* InBtdBaseClass);
    
    UFUNCTION(BlueprintCallable)
    void GetProbabilityCalculation(const FString& InDecoratorName, FSSAiProbabilityCalculation& OutBuffer);
    
    UFUNCTION(BlueprintCallable)
    FString GetFlowAbortMode(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable)
    float GetFloorDistance();
    
    UFUNCTION(BlueprintCallable)
    UBTDecorator* GetFirstSiblingDecorator(const UBTDecorator* InMyDecorator, const UClass* InSearchClass);
    
    UFUNCTION(BlueprintCallable)
    int32 GetExecutionIndex(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable)
    void GetDecoratorsInTheSameCompositeNode(const UBTDecorator* InMyDecorator, const UClass* InSearchClass, TArray<UBTDecorator*>& OutDecorators);
    
    UFUNCTION(BlueprintCallable)
    FString GetDecoratorName(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentTreeName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBranchWithLevelProbabilityCpp(const UBTDecorator* InMyDecorator, const int32 InProbabilityMin, const int32 InProbabilityMax, const UCurveFloat* InLvCurve, const TArray<FSSAiBpEmotionParam>& InEmotionParams, const FName InScheduleCommandId, const UCurveFloat* InAttackFailureCurve, const bool InValidObstructionFailure, const UCurveFloat* InObstructionFailureCurve, const TArray<FKoratCharacterItemDataList>& InItemList, const bool bSendLog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBranchWithDefenseProbabilityCpp(const UBTDecorator* InMyDecorator, const FKoratAiDefenseProbabilityTypeDataList& InDefenseProbabilityTypeDataList, const TArray<FSSAiBpEmotionParam>& InEmotionParams, const TArray<FKoratCharacterItemDataList>& InItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBranchWithAssetProbabilityCpp(const UBTDecorator* InMyDecorator, const FKoratAiProbabilityTypeDataList& InProbabilityTypeDataList, const TArray<FSSAiBpEmotionParam>& InEmotionParams, const FName InScheduleCommandId, const UCurveFloat* InAttackFailureCurve, const bool InValidObstructionFailure, const UCurveFloat* InObstructionFailureCurve, const TArray<FKoratCharacterItemDataList>& InItemList, const bool bSendLog);
    
    UFUNCTION(BlueprintCallable)
    bool GetAreaRadiusCenter(float& OutRadius, FVector& OutCenter);
    
    UFUNCTION(BlueprintCallable)
    FKoratActionDataList GetActionDerived(const FKoratReplaceTransitionActionDataList& InTransitionAction);
    
    UFUNCTION(BlueprintCallable)
    void DrawLotsCpp(const int32 InMaxProbability, const FString& InFirstDecoratorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesNavDataExistCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPotaraFusionCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPotaraCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFusionCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFormChangeCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFlyCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFinishCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterChangeCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAiRunCpp(const UBTDecorator* InMyDecorator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActionDerivedTypeCpp(const UBTDecorator* InMyDecorator, const EAiRushDerivedActionType InDerivedType);
    
    UFUNCTION(BlueprintCallable)
    void AddUserTimer(const FString& InKey, const float InTargetTime);
    
};

