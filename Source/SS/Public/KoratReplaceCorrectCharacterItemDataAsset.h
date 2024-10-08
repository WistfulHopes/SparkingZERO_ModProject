#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratReplaceCorrectCharacterItemDataAsset.generated.h"

class USSReplaceCorrectCharacterItemDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratReplaceCorrectCharacterItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSReplaceCorrectCharacterItemDataAsset*> PtrRecords;
    
public:
    UKoratReplaceCorrectCharacterItemDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void GenerateIdToAssets();
    
};

