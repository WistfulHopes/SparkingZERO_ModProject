#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/HitResult.h"
#include "SSGroundFitInfoCtrl.generated.h"

class UTextBlock;

UCLASS(Blueprintable)
class USSGroundFitInfoCtrl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> infoDispList;
    
    USSGroundFitInfoCtrl();

    UFUNCTION(BlueprintCallable)
    void UpdateByChecked(FHitResult checkedHitResult);
    
    UFUNCTION(BlueprintCallable)
    void Update(TArray<FHitResult> checkHitResults);
    
    UFUNCTION(BlueprintCallable)
    void Setup(TArray<UTextBlock*> infoList);
    
};

