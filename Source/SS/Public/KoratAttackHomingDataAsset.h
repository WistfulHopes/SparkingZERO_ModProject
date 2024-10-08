#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratAttackHomingDataAsset.generated.h"

class UKoratAtkHmngDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAttackHomingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UKoratAtkHmngDataAsset*> PtrRecords;
    
public:
    UKoratAttackHomingDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

