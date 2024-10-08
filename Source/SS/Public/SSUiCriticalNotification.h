#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSUiCriticalNotification.generated.h"

class USSMenuButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSUiCriticalNotification : public USSMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* Button;
    
public:
    USSUiCriticalNotification();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDecidedCloseButton(USSMenuButton* InButton);
    
};

