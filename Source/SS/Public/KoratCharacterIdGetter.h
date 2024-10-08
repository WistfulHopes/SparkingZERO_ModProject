#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterIdGetter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKoratCharacterIdGetter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultValue;
    
    UKoratCharacterIdGetter();

};

