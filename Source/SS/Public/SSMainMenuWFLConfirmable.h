#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuWidgetFromList.h"
#include "SSMainMenuWFLConfirmable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuWFLConfirmable : public USSMainMenuWidgetFromList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeclineIndex;
    
    USSMainMenuWFLConfirmable();

};

