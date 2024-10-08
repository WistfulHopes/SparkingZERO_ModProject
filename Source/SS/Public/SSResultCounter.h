#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSResultCounter.generated.h"

class USSSingleNumber;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSResultCounter : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSSingleNumber*> WidgetNumbers;
    
public:
    USSResultCounter();

};

