#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratMPCController.generated.h"

class UKoratMPCDataAsset;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UKoratMPCController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* StageDitherMPC;
    
public:
    UKoratMPCController();

    UFUNCTION(BlueprintCallable)
    void SetupMPC(UKoratMPCDataAsset* InDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseMPC();
    
};

