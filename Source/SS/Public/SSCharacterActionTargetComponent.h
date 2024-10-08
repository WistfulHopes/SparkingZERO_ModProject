#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SSCharacterActionTargetComponentPostPhysicsTickFunction.h"
#include "SSCharacterActionTargetComponent.generated.h"

class ASSCharacter;
class USSCharacterActionTarget;
class USSCharacterActionTargetComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterActionTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStayActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StayWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetStayActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComboTargetStayActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreActionTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActionTargetStopActionEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopActionTargetLater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastKnownTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterActionTarget* SSCharacterActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterActionTarget* SSCharacterActionTargetStay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> SSCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> SkinMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ActionTargetStayLastTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LastKnownTransform;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterActionTargetComponentPostPhysicsTickFunction PostPhysicsTickFunction;
    
    USSCharacterActionTargetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStayActionTargetWaitTime(float StayActionTargetWaitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStayActionTargetTime(float StayActionTargetTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStayActionTarget(bool stayActionTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreActionTarget(bool ignoreActionTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTargetStayLastTransform(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseStayActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseComboStayActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopActionTargetUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStayActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoreActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanEverLook() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSCharacterActionTargetComponent* GetTargetActionTargetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetComponentTagName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetActionTargetTransformStay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetActionTargetTransformReal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetActionTargetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetActionTargetStayLastTransform() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckTargetVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTargetStayActionTarget();
    
};

