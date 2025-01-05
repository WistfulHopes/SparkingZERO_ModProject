#pragma once
#include "CoreMinimal.h"
#include "SSUserWidget.h"
#include "SSDramaticDirectionDetailSwitcher.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticDirectionDetailSwitcher : public USSUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> BuffIconTextures;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> BuffIconImages;
    
public:
    USSDramaticDirectionDetailSwitcher();

};

