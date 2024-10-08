#pragma once
#include "CoreMinimal.h"
#include "KoratAreaManagingComponent.h"
#include "KoratBeamAreaManagingComponent.generated.h"

class ASSBulletBeamView;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratBeamAreaManagingComponent : public UKoratAreaManagingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AreaThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AreaComponentClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSBulletBeamView> BeamView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> AreaComponents;
    
public:
    UKoratBeamAreaManagingComponent(const FObjectInitializer& ObjectInitializer);

};

