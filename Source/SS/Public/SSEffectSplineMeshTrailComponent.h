#pragma once
#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "EKoratEffectSplineMeshTrailMaterialElementType.h"
#include "OnBoolSplineMeshTrailDelegate.h"
#include "SSEffectSplineMeshTrailComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSEffectSplineMeshTrailComponent : public USplineMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratEffectSplineMeshTrailMaterialElementType MaterialElementType;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoolSplineMeshTrail OnEventChangeHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInterface> BackupBaseMaterial;
    
public:
    USSEffectSplineMeshTrailComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetMaterialElementType(const EKoratEffectSplineMeshTrailMaterialElementType NewElementType);
    
};

