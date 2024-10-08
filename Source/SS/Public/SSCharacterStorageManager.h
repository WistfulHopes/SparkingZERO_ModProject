#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterStorageManager.generated.h"

class USSCharacterStorage;

UCLASS(Blueprintable)
class USSCharacterStorageManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSCharacterStorage*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRemoveCharacters;
    
public:
    USSCharacterStorageManager();

};

