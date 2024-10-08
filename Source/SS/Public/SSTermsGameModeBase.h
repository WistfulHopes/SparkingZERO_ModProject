#pragma once
#include "CoreMinimal.h"
#include "SSMenuGameModeBase.h"
#include "SSTermsGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASSTermsGameModeBase : public ASSMenuGameModeBase {
    GENERATED_BODY()
public:
    ASSTermsGameModeBase(const FObjectInitializer& ObjectInitializer);

};

