#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSBuffIconSet.generated.h"

class UCanvasPanel;
class USSBuffIcon;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBuffIconSet : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> BuffIconTextures;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSBuffIcon*> SSBuffIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel;
    
public:
    USSBuffIconSet();

};

