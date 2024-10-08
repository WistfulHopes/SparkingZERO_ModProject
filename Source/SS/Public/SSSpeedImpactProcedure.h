#pragma once
#include "CoreMinimal.h"
#include "SSBattleImpactProcedure.h"
#include "SSSpeedImpactProcedure.generated.h"

UCLASS(Blueprintable)
class ASSSpeedImpactProcedure : public ASSBattleImpactProcedure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Intro1SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Intro2SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Game1SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Game2SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Win1SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Lose2SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Lose1SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Win2SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiseValue;
    
public:
    ASSSpeedImpactProcedure(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGameSelf(float DeltaSecond);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEffectTransform();
    
    UFUNCTION(BlueprintCallable)
    void SetupIntroPosition();
    
    UFUNCTION(BlueprintCallable)
    void SetupImpl();
    
    UFUNCTION(BlueprintCallable)
    void SetupGamePosition();
    
    UFUNCTION(BlueprintCallable)
    void SetupFinishPosition();
    
    UFUNCTION(BlueprintCallable)
    void RequestPositionSetImpl(float TravelTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateGameCharacter(float DeltaSecond);
    
};

