#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratActionDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratActionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratActionDataAssetRecord> Records;
    
public:
    UKoratActionDataAsset();

    UFUNCTION(BlueprintCallable)
    void UpdateActionName();
    
    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void SetContinueDamageFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetActionName(const FName& InActionKey) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckSequenceMarker();
    
    UFUNCTION(BlueprintCallable)
    void CheckAlNumId();
    
};

