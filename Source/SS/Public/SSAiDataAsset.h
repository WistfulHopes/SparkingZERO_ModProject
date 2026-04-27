#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCpuLevel.h"
#include "KoratCharacterFigureDataList.h"
#include "KoratCharacterItemDataList.h"
#include "MutualDataAsset.h"
#include "SSAiActionDataList.h"
#include "SSAiBodySize.h"
#include "SSAiItem.h"
#include "SSAiDataAsset.generated.h"

class UBehaviorTree;
class UCurveFloat;
class USSAiTypeDataAsset;
class UUserDefinedEnum;

UCLASS(Blueprintable, MinimalAPI)
class USSAiDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SearchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPartialMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName DuplicationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* ProbabilityTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* DefenseProbabilityTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* BlastTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* AiLevelTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* AiOptimizeTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ProbabilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultAiLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleCpuLevel, int32> DifficultyAiLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultRepeatedInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedImpactTargetMinCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedImpactTargetMaxCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactTargetMinCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactTargetMaxCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PowerImpactImpactBoostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactMinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactMaxRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterFigureDataList, FSSAiBodySize> BodySizeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSAiActionDataList> ActionDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSAiTypeDataAsset*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterItemDataList, FSSAiItem> ItemDataMap;
    
    USSAiDataAsset();

    UFUNCTION(BlueprintCallable)
    void SortItemDataMap();
    
    UFUNCTION(BlueprintCallable)
    void SortActionDataMap();
    
    UFUNCTION(BlueprintCallable)
    void SetupSortId();
    
    UFUNCTION(BlueprintCallable)
    void Search();
    
    UFUNCTION(BlueprintCallable)
    void OutputTimeOutZero();
    
    UFUNCTION(BlueprintCallable)
    void OutputDisablesInterruptsOtherTrees();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTypeNameArray(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCommandNameArray(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable)
    void DuplicationActionDataItem();
    
};