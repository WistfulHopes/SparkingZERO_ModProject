#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSBattleTrainingTalkData.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleTrainingTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LineText;
    
    SS_API FSSBattleTrainingTalkData();
};

