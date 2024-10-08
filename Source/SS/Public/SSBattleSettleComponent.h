#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBattleSettleTransitionType.h"
#include "SSBattleSettleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSBattleSettleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USSBattleSettleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTransitionType(const EBattleSettleTransitionType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetDramaticFinish(const bool InDramaticFinish);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleSettleTransitionType GetTransitionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDramaticFinish() const;
    
};

