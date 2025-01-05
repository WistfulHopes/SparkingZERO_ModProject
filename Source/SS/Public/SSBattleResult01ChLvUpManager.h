#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleResult01ChLvUpManager.generated.h"

class USSMenuButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult01ChLvUpManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* BeforeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> BattleResult01ChLvUpMenuButtons;
    
public:
    USSBattleResult01ChLvUpManager();

};

