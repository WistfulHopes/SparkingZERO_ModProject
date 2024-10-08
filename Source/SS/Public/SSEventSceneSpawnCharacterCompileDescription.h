#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "SSEventSceneSpawnCharacterCompileDescription.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FSSEventSceneSpawnCharacterCompileDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeDataList Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSCharacter> ClassPtr;
    
    SS_API FSSEventSceneSpawnCharacterCompileDescription();
};

