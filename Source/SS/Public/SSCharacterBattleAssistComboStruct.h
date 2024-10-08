#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "SSCharacterBattleAssistComboStruct.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterBattleAssistComboStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PROB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Prob_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleKey> BattleKeyArray;
    
    SS_API FSSCharacterBattleAssistComboStruct();
};

