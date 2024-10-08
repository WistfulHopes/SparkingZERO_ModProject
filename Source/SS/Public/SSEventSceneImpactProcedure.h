#pragma once
#include "CoreMinimal.h"
#include "SSBattleImpactProcedure.h"
#include "SSEventSceneImpactProcedure.generated.h"

class ASSCharacter;

UCLASS(Abstract, Blueprintable, HideDropdown, MinimalAPI)
class ASSEventSceneImpactProcedure : public ASSBattleImpactProcedure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> RebindEvent00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> RebindEvent01;
    
public:
    ASSEventSceneImpactProcedure(const FObjectInitializer& ObjectInitializer);

};

