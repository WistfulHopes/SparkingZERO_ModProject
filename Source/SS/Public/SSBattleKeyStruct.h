#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSBattleKey.h"
#include "SSBattleKeyStruct.generated.h"

UCLASS(Blueprintable)
class USSBattleKeyStruct : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleKey BattleKey;
    
public:
    USSBattleKeyStruct();

};

