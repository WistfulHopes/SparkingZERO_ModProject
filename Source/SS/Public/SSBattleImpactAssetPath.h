#pragma once
#include "CoreMinimal.h"
#include "SSBattleImpactAssetPath.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleImpactAssetPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestAssetPath;
    
    SS_API FSSBattleImpactAssetPath();
};

