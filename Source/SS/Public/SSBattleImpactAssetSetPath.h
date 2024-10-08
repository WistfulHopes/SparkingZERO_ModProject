#pragma once
#include "CoreMinimal.h"
#include "SSBattleImpactAssetSetPath.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleImpactAssetSetPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceMasterSequenceAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestMasterSequenceAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MontageAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionData;
    
    SS_API FSSBattleImpactAssetSetPath();
};

