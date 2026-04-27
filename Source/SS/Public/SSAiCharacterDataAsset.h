#pragma once
#include "CoreMinimal.h"
#include "ESSAiFormChangeType.h"
#include "KoratAiTypeDataList.h"
#include "MutualDataAsset.h"
#include "SSAiB1.h"
#include "SSAiB2UB.h"
#include "SSAiCharacterDataAsset.generated.h"

class UBehaviorTree;
class USSAiPersonalityDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class USSAiCharacterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList DefaultAiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAiPersonalityDataAsset* PersonalityDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RushKidanRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmashKidanRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB1 B1ud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB1 B1lr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB2UB B2squ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB2UB B2tri;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB2UB UB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UBehaviorTree*> SpecificBehaviorTreeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSAiFormChangeType, int32> FormChangeProbabilityMap;
    
    USSAiCharacterDataAsset();

};

