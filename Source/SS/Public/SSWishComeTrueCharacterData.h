#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSWishComeTrueCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSSWishComeTrueCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeDataList CostumeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList LocatorData;
    
    SS_API FSSWishComeTrueCharacterData();
};

