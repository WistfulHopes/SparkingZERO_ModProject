#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSNumberDialButton.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSNumberDialButton : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Label;
    
    USSNumberDialButton();

    UFUNCTION(BlueprintCallable)
    void OnDecidedArrowUp();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedArrowDown();
    
};

