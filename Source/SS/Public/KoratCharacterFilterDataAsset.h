#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratCharacterFilterDataAsset.generated.h"

class USSCharacterFilterDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratCharacterFilterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSCharacterFilterDataAsset*> PtrRecords;
    
public:
    UKoratCharacterFilterDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName(const FName& InKey) const;
    
};

