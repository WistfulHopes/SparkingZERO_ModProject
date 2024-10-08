#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataUIAssets.generated.h"

class UKoratBattleSetupTransitionDataAsset;
class UTexture2D;

USTRUCT(BlueprintType)
struct FKoratCharacterDataUIAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FaceChip1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FaceChip2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FaceChipCharacterSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleSetupTransitionDataAsset* BattleSetupData;
    
    SS_API FKoratCharacterDataUIAssets();
};

