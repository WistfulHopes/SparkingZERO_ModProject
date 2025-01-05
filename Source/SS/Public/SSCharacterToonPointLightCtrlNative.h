#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectionalLightControlSettingData.h"
#include "DirectionalLightDefaultSettings.h"
#include "SSCharacterToonPointLightCtrlNative.generated.h"

class UCurveFloat;
class UDataTable;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class ASSCharacterToonPointLightCtrlNative : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* ToonShadingMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PointLightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LightControlSettingTableAtCameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DirectionalLightSettingTablePerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionalLightDefaultSettings DirectionalLightDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<AActor>> SceneContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDirectionalLightControlSettingData OverrideDirLightSettingPerLevel;
    
public:
    ASSCharacterToonPointLightCtrlNative(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameWorldRuntime();
    
};

