#pragma once
#include "CoreMinimal.h"
#include "EKoratInverseKinematicsType.h"
#include "GrappleHandParameters.h"
#include "SSAnimNotifyState.h"
#include "SSAnimNotifyStateGrapple.generated.h"

class UKoratCharacterGrappleComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USSAnimNotifyStateGrapple : public USSAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratCharacterGrappleComponent* GrappleComponent;
    
public:
    USSAnimNotifyStateGrapple();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EndGrapple() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BeginGrapple(const EKoratInverseKinematicsType Type, const FGrappleHandParameters& RightHand, const FGrappleHandParameters& LeftHand, const FName& GrabBone) const;
    
};

