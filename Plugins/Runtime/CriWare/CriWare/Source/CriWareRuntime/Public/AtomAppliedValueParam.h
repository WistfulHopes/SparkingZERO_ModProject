#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorParam.h"
#include "BusSendLevelByNameParam.h"
#include "BusSendLevelOffsetByNameParam.h"
#include "BusSendLevelOffsetParam.h"
#include "BusSendLevelParam.h"
#include "AtomAppliedValueParam.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomAppliedValueParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBusSendLevelParam BusSendLevelParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBusSendLevelByNameParam> BusSendLevelByNameParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBusSendLevelOffsetParam BusSendLevelOffsetParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBusSendLevelOffsetByNameParam> BusSendLevelOffsetByNameParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomSelectorParam AtomSelectorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AsrRackIDs;
    
    FAtomAppliedValueParam();
};

