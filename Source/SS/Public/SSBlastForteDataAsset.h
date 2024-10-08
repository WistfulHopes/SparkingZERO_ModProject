#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBlastDemoBranchSupportCharacter.h"
#include "SSBlastForteParamDataAssetRecord.h"
#include "SSSupportingCharacterData.h"
#include "SSBlastForteDataAsset.generated.h"

class USSBlastOperationGuideDataAsset;

UCLASS(Blueprintable)
class USSBlastForteDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpendBlastStock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerExpendBlastStock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeakSpecialShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSSupportingCharacterData> SupportCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBlastDemoBranchSupportCharacter> BranchSupportCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBlastForteParamDataAssetRecord BlastForteParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastOperationGuideDataAsset* BlastOperationData;
    
    USSBlastForteDataAsset();

};

