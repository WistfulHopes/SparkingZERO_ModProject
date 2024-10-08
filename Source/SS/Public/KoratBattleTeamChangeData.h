#pragma once
#include "CoreMinimal.h"
#include "KoratPlayerStartDataList.h"
#include "KoratBattleTeamChangeData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FKoratBattleTeamChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList PlayerStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SPGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTexture> FaceChipTexture;
    
    SS_API FKoratBattleTeamChangeData();
};

