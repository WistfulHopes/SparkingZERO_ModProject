#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataList.h"
#include "SSDragonAdventureIFCharacter.h"
#include "SSDragonAdventureIFCharacterBase.h"
#include "SSDragonAdventureIFLocalSingleton.generated.h"

UCLASS(Blueprintable)
class USSDragonAdventureIFLocalSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSDragonAdventureIFCharacter> CharacterInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSDragonAdventureIFCharacterBase> CharacterBaseArray;
    
public:
    USSDragonAdventureIFLocalSingleton();

};

