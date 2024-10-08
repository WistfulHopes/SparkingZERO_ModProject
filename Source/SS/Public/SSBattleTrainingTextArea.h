#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBattleTrainingTextArea.generated.h"

class USSMenuTextUi;

UCLASS(Blueprintable)
class ASSBattleTrainingTextArea : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuTextUi* TextArea;
    
public:
    ASSBattleTrainingTextArea(const FObjectInitializer& ObjectInitializer);

};

