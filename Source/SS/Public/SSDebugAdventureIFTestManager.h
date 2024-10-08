#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSAdventureIFAgingCharacterEventData.h"
#include "SSDebugAdventureIFTestManager.generated.h"

UCLASS(Blueprintable)
class USSDebugAdventureIFTestManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAdventureIFAgingCharacterEventData CharacterEventData;
    
public:
    USSDebugAdventureIFTestManager();

};

