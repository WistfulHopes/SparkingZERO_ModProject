#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FakePersSettings.h"
#include "SSAnimePersComponent.generated.h"

class ASSCutCameraActor;
class UMaterialParameterCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAnimePersComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakePersSettings FakePersSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CameraInstance;
    
    USSAnimePersComponent(const FObjectInitializer& ObjectInitializer);

};

