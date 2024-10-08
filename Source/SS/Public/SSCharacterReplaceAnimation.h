#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSMontageLevelSequenceArray.h"
#include "SSCharacterReplaceAnimation.generated.h"

class UKoratActionDataAsset;
class UKoratCharacterMLSDataAsset;
class USSFigureMLSDataAsset;

UCLASS(Blueprintable)
class USSCharacterReplaceAnimation : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratActionDataAsset* ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSFigureMLSDataAsset* FigureMontageLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterMLSDataAsset* CharacterMontageLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSMontageLevelSequenceArray> ReplaceAnimations;
    
public:
    USSCharacterReplaceAnimation();

};

