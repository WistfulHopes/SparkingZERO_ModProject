#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "ESSLightingPositonMethod.h"
#include "SSToonShadingSetting.h"
#include "SSCharaToonLightingComponent.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharaToonLightingComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSToonShadingSetting ToonMeshSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPointLightLocation;
    
public:
    USSCharaToonLightingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ESSLightingPositonMethod GetPositioningMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecInitStaticShell(UMeshComponent* InShell, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecInitSkeletalShell(UMeshComponent* InSource, UMeshComponent* InShell, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void ExecApplyShading(bool bConstruction, UMeshComponent* InMesh);
    
};

