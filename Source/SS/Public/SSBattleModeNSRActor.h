#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBattleModeNSRActor.generated.h"

class ASSBGMManager;
class ULevelSequence;

UCLASS(Blueprintable)
class ASSBattleModeNSRActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* NextEnemyDetectedSequence;
    
public:
    ASSBattleModeNSRActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnBgmManagerReady(ASSBGMManager* InBgmManager);
    
};

