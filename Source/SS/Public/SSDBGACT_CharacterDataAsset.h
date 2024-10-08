#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KoratCharacterDataList.h"
#include "SSDBGACT_CharacterDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDBGACT_CharacterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> Characters;
    
public:
    USSDBGACT_CharacterDataAsset();

protected:
    UFUNCTION(BlueprintCallable)
    void EnumerateCharacters();
    
};

