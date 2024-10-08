#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSBattleTimer.generated.h"

class USSSingleNumber;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTimer : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSSingleNumber*> WidgetNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSSingleNumber*> WidgetNumbers2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* InfinityWidget;
    
public:
    USSBattleTimer();

};

