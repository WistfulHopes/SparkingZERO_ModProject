#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratSubActionAnim.h"
#include "KoratCharacterSubActionState.generated.h"

UCLASS(Blueprintable)
class UKoratCharacterSubActionState : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSubActionAnim SubActionAnimSlot;
    
public:
    UKoratCharacterSubActionState();

};

