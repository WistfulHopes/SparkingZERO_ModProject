#pragma once
#include "CoreMinimal.h"
#include "KoratMissionCard.generated.h"

class USSUiWidget;

USTRUCT(BlueprintType)
struct FKoratMissionCard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* MissionCardBase;
    
    SS_API FKoratMissionCard();
};

