#pragma once
#include "CoreMinimal.h"
#include "SSBattleMode010TipsParam.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleMode010TipsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    SS_API FSSBattleMode010TipsParam();
};

