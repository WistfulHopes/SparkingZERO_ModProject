#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KoratCultureTextRecord.h"
#include "KoratCultureTextDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratCultureTextDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCultureTextRecord> Data;
    
    UKoratCultureTextDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
    UFUNCTION(BlueprintCallable)
    FKoratCultureTextRecord Get(const FName InKeyName);
    
    UFUNCTION(BlueprintCallable)
    bool ContainKey(const FName InKeyName);
    
};

