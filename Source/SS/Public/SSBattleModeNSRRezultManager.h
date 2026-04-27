#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleModeNSRRezultManager.generated.h"

class USSSingleNumber;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleModeNSRRezultManager : public USSMenuManager {
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
    TArray<USSSingleNumber*> WidgetWinNumbersMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSSingleNumber*> WidgetDpNumbers;
    
public:
    USSBattleModeNSRRezultManager();

};

