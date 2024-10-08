#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratRequestVisibilitySwirchInfo.h"
#include "SSBattleRequestVisibilitySwirchActor.generated.h"

class ASSCharacter;

UCLASS(Blueprintable)
class ASSBattleRequestVisibilitySwirchActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratRequestVisibilitySwirchInfo> RequestInfo;
    
public:
    ASSBattleRequestVisibilitySwirchActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestVisibilitySwirch(ASSCharacter* InCharacter, bool InVisibility, float InDelay);
    
};

