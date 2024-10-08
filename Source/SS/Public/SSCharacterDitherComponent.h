#pragma once
#include "CoreMinimal.h"
#include "SSDitherComponent.h"
#include "SSCharacterDitherComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterDitherComponent : public USSDitherComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugRenderSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialDitherTilingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialDitherColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialDitherSaturationName;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> ControlMaterialCaches;
    
public:
    USSCharacterDitherComponent(const FObjectInitializer& ObjectInitializer);

};

