#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBattleDebugDrawCharacterText.h"
#include "SSBattleDebugDrawActor.generated.h"

class USSBattleDebugWidget;

UCLASS(Blueprintable)
class SS_API ASSBattleDebugDrawActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleDebugDrawCharacterText Text1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleDebugDrawCharacterText Text2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BattleInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BenchCharacterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DamageLogText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSBattleDebugWidget* BattleDebugWidget;
    
public:
    ASSBattleDebugDrawActor(const FObjectInitializer& ObjectInitializer);

};

