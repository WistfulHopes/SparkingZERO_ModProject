#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleResult01PmManager.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult01PmManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumber;
    
public:
    USSBattleResult01PmManager();

};

