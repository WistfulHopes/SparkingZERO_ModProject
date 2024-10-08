#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECharacterBattleState.h"
#include "SSCharacterAntiBulletComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterAntiBulletComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepelAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectionInputReceptionSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectionInputInvalidSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastRepelToAdapt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReflectionContinuousInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastRepelPositionTolerance;
    
    USSCharacterAntiBulletComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SuccessReflectionInput();
    
    UFUNCTION(BlueprintCallable)
    void StartReflectionInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldChangeToBlastErase() const;
    
    UFUNCTION(BlueprintCallable)
    void SetAutoReflect(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterBattleStateChanged(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState);
    
    UFUNCTION(BlueprintCallable)
    bool IsReflectionInputReception();
    
    UFUNCTION(BlueprintCallable)
    bool IsReflectionInputInvalid();
    
    UFUNCTION(BlueprintCallable)
    bool CheckRepel(const bool InMaintainQuo, const bool InAbsorption);
    
    UFUNCTION(BlueprintCallable)
    bool CheckReflection(const bool InAbsorption);
    
    UFUNCTION(BlueprintCallable)
    bool CheckOnlyRepelAndReflection();
    
    UFUNCTION(BlueprintCallable)
    bool CheckBlastRepel(const bool InAbsorption, bool& bOutSuccessAbsorption);
    
    UFUNCTION(BlueprintCallable)
    bool CheckBlastErase();
    
};

