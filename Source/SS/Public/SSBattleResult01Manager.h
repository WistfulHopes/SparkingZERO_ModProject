#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleResult01Manager.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult01Manager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumber;
    
public:
    USSBattleResult01Manager();

};

