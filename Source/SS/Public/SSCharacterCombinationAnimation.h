#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSMontageLevelSequenceArray.h"
#include "SSCharacterCombinationAnimation.generated.h"

class UKoratCharacterCombinationDataAsset;
class UKoratCharacterDataAsset;

UCLASS(Blueprintable)
class USSCharacterCombinationAnimation : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterDataAsset* CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterCombinationDataAsset* CharacterCombinationDataAssetOneself;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterCombinationDataAsset* CharacterCombinationDataAssetOpponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSMontageLevelSequenceArray> ReplaceAnimations;
    
public:
    USSCharacterCombinationAnimation();

};

