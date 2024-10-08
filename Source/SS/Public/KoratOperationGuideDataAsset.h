#pragma once
#include "CoreMinimal.h"
#include "EKoratOperationGuideBlock.h"
#include "KoratBlastGroupDataList.h"
#include "KoratReplaceAnimationDataList.h"
#include "MutualDataAsset.h"
#include "KoratOperationGuideDataAsset.generated.h"

class USSBattleOperationGuideDataAsset;
class USSBlastOperationGuideDataAsset;

UCLASS(Blueprintable)
class UKoratOperationGuideDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratOperationGuideBlock> OperationGuideListOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBattleOperationGuideDataAsset*> BattleRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBlastGroupDataList, USSBlastOperationGuideDataAsset*> BlastRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratReplaceAnimationDataList, FText> ReplaceAnimationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratReplaceAnimationDataList, FText> ReplaceAnimationTechniqueText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratReplaceAnimationDataList, USSBattleOperationGuideDataAsset*> DerivedComboData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratReplaceAnimationDataList, USSBattleOperationGuideDataAsset*> DerivedComboData2;
    
public:
    UKoratOperationGuideDataAsset();

    UFUNCTION(BlueprintCallable)
    void AutoGenerateDataAsset();
    
};

