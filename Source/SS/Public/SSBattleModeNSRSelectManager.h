#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleModeNSRSelectManager.generated.h"

class USSMenuButton;
class USSSingleNumber;
class UTexture;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleModeNSRSelectManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumberWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumberDp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSSingleNumber*> WidgetWinNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSSingleNumber*> WidgetDpNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> BattleModeNSRSelectMenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture>> FaceChip1PTexture;
    
public:
    USSBattleModeNSRSelectManager();

};

