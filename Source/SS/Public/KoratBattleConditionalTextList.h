#pragma once
#include "CoreMinimal.h"
#include "KoratBattleConditionalTextInfoData.h"
#include "KoratBattleConditionalTextList.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleConditionalTextList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ConditionalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConditionalTextInfoData> ConditionalTextInfo;
    
    SS_API FKoratBattleConditionalTextList();
};

