#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "KoratWindData.h"
#include "KoratWindSourceCtrlActor.generated.h"

class UMaterialParameterCollection;
class UWindDirectionalSourceComponent;

UCLASS(Blueprintable)
class AKoratWindSourceCtrlActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWindControlEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWindDirectionalSourceComponent*> WindComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* TreeWindMPC;
    
    AKoratWindSourceCtrlActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPointWindData(TArray<FKoratWindData>& OutWindData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDirectionalWindParameter(FVector& OutDirection, float& OutSpeed, float& OutMinGustAmt, float& OutMaxGustAmt, float& OutTotalWeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyDirectionalWindToMPC() const;
    
};

