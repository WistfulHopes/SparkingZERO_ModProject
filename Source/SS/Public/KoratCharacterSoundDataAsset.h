#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterSoundDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratCharacterSoundDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratCharacterSoundDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterSoundDataAssetRecord> Records;
    
public:
    UKoratCharacterSoundDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable)
    void DeleteUselessData();
    
};

