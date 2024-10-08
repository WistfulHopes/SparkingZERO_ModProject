#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBattleResultAdventureIFController.generated.h"

class ASSLevelSequenceActor;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSBattleResultAdventureIFController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
public:
    ASSBattleResultAdventureIFController(const FObjectInitializer& ObjectInitializer);

};

