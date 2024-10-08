#pragma once
#include "CoreMinimal.h"
#include "ESSAiFormChangeType.h"
#include "KoratAiTypeDataList.h"
#include "KoratCharacterDataList.h"
#include "SSAiB1DataList.h"
#include "SSAiB2UBDataList.h"
#include "SSAiCharacterDataList.generated.h"

class UBehaviorTree;
class USSAiPersonalityDataAsset;

USTRUCT(BlueprintType)
struct SS_API FSSAiCharacterDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList DefaultAiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAiPersonalityDataAsset* PersonalityDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RushKidanRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmashKidanRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB1DataList B1ud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB1DataList B1lr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB2UBDataList B2squ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB2UBDataList B2tri;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiB2UBDataList UB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UBehaviorTree*> SpecificBehaviorTreeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSAiFormChangeType, int32> FormChangeProbabilityMap;
    
    FSSAiCharacterDataList();
};

