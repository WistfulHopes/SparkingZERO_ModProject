#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSSingleNumber.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSSingleNumber : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* CurrentNumberImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NextNumberImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* NumTexture;
    
public:
    USSSingleNumber();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNumberNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNumberChange();
    
};

