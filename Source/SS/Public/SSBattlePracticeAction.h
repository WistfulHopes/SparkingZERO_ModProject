#pragma once
#include "CoreMinimal.h"
#include "EBattlePracticeJudgmentType.h"
#include "KoratActionDataList.h"
#include "SSBattlePracticeAction.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSBattlePracticeAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattlePracticeJudgmentType JudgmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAmountXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAmountZ;
    
    FSSBattlePracticeAction();
};

