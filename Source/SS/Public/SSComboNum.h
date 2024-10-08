#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSComboNum.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSComboNum : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* CurrentNumberImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NextNumberImage;
    
public:
    USSComboNum();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNumberNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNumberChange();
    
};

