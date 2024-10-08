#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupPlayerLabelObjects.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSSBattleSetupPlayerLabelObjects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* BaseRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OutlineRight;
    
    SS_API FSSBattleSetupPlayerLabelObjects();
};

