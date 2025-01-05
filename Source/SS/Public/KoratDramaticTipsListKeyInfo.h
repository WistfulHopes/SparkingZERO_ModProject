#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleTipsCategoryType.h"
#include "KoratDramaticTipsListKeyInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticTipsListKeyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleTipsCategoryType TipsCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TipsKey;
    
    SS_API FKoratDramaticTipsListKeyInfo();
};

