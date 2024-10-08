#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratHitBackMovementDataAsset.generated.h"

class USSHitBackMovementDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratHitBackMovementDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSHitBackMovementDataAsset*> PtrRecords;
    
public:
    UKoratHitBackMovementDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHitBackMovementName(const FName& InHitBackMovementKey) const;
    
};

