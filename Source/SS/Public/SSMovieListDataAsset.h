#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMovieListDataAsset.generated.h"

class UMaterial;
class USSMovieItemDataAsset;

UCLASS(Blueprintable)
class USSMovieListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> ManaImageMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSMovieItemDataAsset*> PtrRecords;
    
    USSMovieListDataAsset();

};

