#pragma once
#include "CoreMinimal.h"
#include "SSWCTWishSelectorButtons.generated.h"

class USSWishSelectorTalkButton;

USTRUCT(BlueprintType)
struct FSSWCTWishSelectorButtons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSWishSelectorTalkButton*> Buttons;
    
    SS_API FSSWCTWishSelectorButtons();
};

