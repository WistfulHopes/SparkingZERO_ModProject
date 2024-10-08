#pragma once
#include "CoreMinimal.h"
#include "ESSAiDefenseType.h"
#include "ESSAiReactionSpeedType.h"
#include "KoratAiProbabilityTypeDataList.h"
#include "MutualDataAsset.h"
#include "SSAiDefenseProbability.h"
#include "SSAiLevelProbability.h"
#include "SSAiLevelReactionSpeed.h"
#include "SSAiTypeDataAsset.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class USSAiTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SearchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPartialMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultProbabilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultDefenseProbabilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultReactionSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LearningGuardProbabilityUpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAiProbabilityTypeDataList, FSSAiLevelProbability> ProbabilityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSAiDefenseType, FSSAiDefenseProbability> DefenseProbabilityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSAiReactionSpeedType, FSSAiLevelReactionSpeed> ReactionSpeedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreEmotionalParameter;
    
    USSAiTypeDataAsset();

    UFUNCTION(BlueprintCallable)
    void SortByName();
    
    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void SetupSortId();
    
    UFUNCTION(BlueprintCallable)
    void Search();
    
    UFUNCTION(BlueprintCallable)
    void ResetProbabilityMap();
    
    UFUNCTION(BlueprintCallable)
    void RefreshProbabilityMap();
    
    UFUNCTION(BlueprintCallable)
    void OutputProbabilityMap();
    
    UFUNCTION(BlueprintCallable)
    void CreateReactionSpeedMap();
    
    UFUNCTION(BlueprintCallable)
    void CreateProbabilityMap();
    
    UFUNCTION(BlueprintCallable)
    void CreateDefenseProbabilityMap();
    
};

