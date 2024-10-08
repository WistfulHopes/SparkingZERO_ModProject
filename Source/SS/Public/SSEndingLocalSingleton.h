#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSEndingLocalSingleton.generated.h"

class USSStaffRollDataAsset;

UCLASS(Blueprintable)
class USSEndingLocalSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSStaffRollDataAsset* StaffRollData;
    
public:
    USSEndingLocalSingleton();

};

