#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDragonType.h"
#include "SSMythicalOrbs.h"
#include "SSMythicalOrbManager.generated.h"

UCLASS(Blueprintable)
class USSMythicalOrbManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDragonType, FSSMythicalOrbs> PosessedOrbs;
    
    USSMythicalOrbManager();

};

