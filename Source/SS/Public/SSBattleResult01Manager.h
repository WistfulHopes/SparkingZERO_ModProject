#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleResult01Manager.generated.h"

class USSMenuButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult01Manager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> BattleResult01MenuButtons;
    
public:
    USSBattleResult01Manager();

};

