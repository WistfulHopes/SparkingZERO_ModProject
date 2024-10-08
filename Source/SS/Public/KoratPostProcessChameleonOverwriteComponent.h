#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessOverwriteBaseComponent.h"
#include "KoratPostProcessChameleonOverwriteComponent.generated.h"

class UKoratPostProcessChameleonComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratPostProcessChameleonOverwriteComponent : public UKoratPostProcessOverwriteBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostProcessChameleonComponent* KoratPostProcess;
    
public:
    UKoratPostProcessChameleonOverwriteComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetPropertyNameList();
    
    UFUNCTION(BlueprintCallable)
    UKoratPostProcessChameleonComponent* GetKoratPostProcess();
    
};

