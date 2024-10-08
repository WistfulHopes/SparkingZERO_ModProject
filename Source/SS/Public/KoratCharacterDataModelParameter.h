#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataModelParameter.generated.h"

class ASSCharacter;
class USSTrailDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterDataModelParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSCharacter> CharacterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTrailDataAsset* TrailData;
    
    SS_API FKoratCharacterDataModelParameter();
};

