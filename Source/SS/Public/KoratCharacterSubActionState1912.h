#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratSubActionAnim.h"
#include "KoratCharacterSubActionState1912.generated.h"

UCLASS(Blueprintable)
class UKoratCharacterSubActionState1912 : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSubActionAnim SubActionAnimSlot[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayIndex;
    
public:
    UKoratCharacterSubActionState1912();

};

