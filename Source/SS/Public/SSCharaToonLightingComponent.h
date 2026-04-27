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
    
#if WITH_EDITORONLY_DATA
    UPROPERTY(EditAnywhere, meta = (DisplayName = "Enable In-Editor Outline", AllowPrivateAccess=true))
    bool bEnableShellApplication = true;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ToonShell", meta=(AllowPrivateAccess=true))
    UMaterialInterface* ShellMaterial = nullptr;
#endif

    
public:
    USSCharaToonLightingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void OnRegister() override;
    
#if WITH_EDITOR
    virtual void PostEditComponentMove(bool bFinished) override;
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

    virtual void OnComponentCreated() override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ESSLightingPositonMethod GetPositioningMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecInitStaticShell(UMeshComponent* InShell, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecInitSkeletalShell(UMeshComponent* InSource, UMeshComponent* InShell, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void ExecApplyShading(bool bConstruction, UMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable)
    void ApplyShells();

    template<typename T>
    T* FindComponentByName(FName Name);
};