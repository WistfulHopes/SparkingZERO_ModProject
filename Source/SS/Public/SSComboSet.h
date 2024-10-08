#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSComboSet.generated.h"

class USSCombo;
class USSDamage;

UCLASS(Blueprintable, EditInlineNew)
class USSComboSet : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCombo* ComboWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSDamage* DamageWidget;
    
public:
    USSComboSet();

    UFUNCTION(BlueprintCallable)
    void SetDamageNum(const float InDamageNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSDamage* GetDamageNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSCombo* GetCombo() const;
    
};

