#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESSSimpleAimLookatBone.h"
#include "SSAnimInstance.h"
#include "SSSimpleAimLookatAimParameter.h"
#include "SSSimpleAimLookatLookatParameter.h"
#include "SSSimpleAimLookatNodeParameter.h"
#include "SSCharacterSimpleAimInstance.generated.h"

class AActor;
class USSCharacterSimpleAimInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USSCharacterSimpleAimInstance : public USSAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendTimeZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyBlendTimeNotZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimAlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSSimpleAimLookatBone, FSSSimpleAimLookatNodeParameter> AimNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AimEffectorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLookat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookatPartBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookatPartHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookatPartEye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSSimpleAimLookatBone, FSSSimpleAimLookatNodeParameter> LookatNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LookatEffectorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOverrideBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSSimpleAimLookatBone, FSSSimpleAimLookatNodeParameter> ShareNodes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* UpdateAIMNotifyTargetActor;
    
public:
    USSCharacterSimpleAimInstance();

    UFUNCTION(BlueprintCallable)
    void SetLookatParameters(const FSSSimpleAimLookatLookatParameter& Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetLookatOverrideBlendTime(const bool bInEnable, const float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLookatLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetAimParameters(const FSSSimpleAimLookatAimParameter& Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetAimLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetAimBodyBlendTime(float InBlendTimeTrue, float InBlendTimeFalse);
    
    UFUNCTION(BlueprintCallable)
    static USSCharacterSimpleAimInstance* FindSimpleAimAnimInstance(USkeletalMeshComponent* MeshComp);
    
    UFUNCTION(BlueprintCallable)
    void EnableLookat();
    
    UFUNCTION(BlueprintCallable)
    void EnableAim();
    
    UFUNCTION(BlueprintCallable)
    void DisableLookat();
    
    UFUNCTION(BlueprintCallable)
    void DisableAim();
    
};

