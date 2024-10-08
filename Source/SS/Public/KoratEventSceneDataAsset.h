#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratEventSceneDataAsset.generated.h"

class USSEventSceneDataAsset;

UCLASS(Blueprintable)
class UKoratEventSceneDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSEventSceneDataAsset*> PtrRecords;
    
public:
    UKoratEventSceneDataAsset();

protected:
    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

