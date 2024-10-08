#pragma once
#include "CoreMinimal.h"
#include "KoratMapBattleCount.generated.h"

USTRUCT(BlueprintType)
struct FKoratMapBattleCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeEscapeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeDestructCount;
    
    SS_API FKoratMapBattleCount();
};

