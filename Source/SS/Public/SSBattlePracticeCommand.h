#pragma once
#include "CoreMinimal.h"
#include "EBattlePracticeAcceptedInputsType.h"
#include "EKoratBattleKey.h"
#include "KoratActionDataList.h"
#include "SSBattlePracticeAction.h"
#include "SSBattlePracticeCommand.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSBattlePracticeCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattlePracticeAction> SuccessActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleKey> UiBattleKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> FailureActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattlePracticeAcceptedInputsType AcceptedInputsType;
    
    FSSBattlePracticeCommand();
};

