#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMythicalOrbDataAsset.generated.h"

class USSMythicalOrbDataAssetRecord;

UCLASS(Blueprintable, MinimalAPI)
class USSMythicalOrbDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSMythicalOrbDataAssetRecord*> PtrRecords;
    
public:
    USSMythicalOrbDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMythicalOrbName(const FName& InKey) const;
    
};

