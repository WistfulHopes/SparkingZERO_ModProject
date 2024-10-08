#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratArmorBreakLevelDataAsset.generated.h"

class USSArmorBreakLevelDataAsset;

UCLASS(Blueprintable)
class UKoratArmorBreakLevelDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSArmorBreakLevelDataAsset*> PtrRecords;
    
public:
    UKoratArmorBreakLevelDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

