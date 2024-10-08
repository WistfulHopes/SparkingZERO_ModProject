#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "SSBlastDemoBranchConditionCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSSBlastDemoBranchConditionCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeDataList Costume;
    
    SS_API FSSBlastDemoBranchConditionCharacter();
};

