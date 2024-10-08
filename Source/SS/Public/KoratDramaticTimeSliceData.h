#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticTimeSliceData.generated.h"

class USSEventSceneDEDataAsset;

USTRUCT(BlueprintType)
struct FKoratDramaticTimeSliceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USSEventSceneDEDataAsset> SceneDataAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneId;
    
    SS_API FKoratDramaticTimeSliceData();
};

