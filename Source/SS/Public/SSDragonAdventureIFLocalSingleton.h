#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataList.h"
#include "SSDragonAdventureIFCharacter.h"
#include "SSDragonAdventureIFCharacterBase.h"
#include "SSDragonAdventureIFLocalSingleton.generated.h"

class USSDragonAdventureIFEventBlockDataAsset;

UCLASS(Blueprintable)
class USSDragonAdventureIFLocalSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSDragonAdventureIFCharacter> CharacterInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSDragonAdventureIFCharacterBase> CharacterBaseArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, USSDragonAdventureIFEventBlockDataAsset*> OtherBlockDataMap;
    
public:
    USSDragonAdventureIFLocalSingleton();

};

