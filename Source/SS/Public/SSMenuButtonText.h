#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonTextDecidedEventDelegate.h"
#include "OnSSMenuButtonTextDecidedNewEventDelegate.h"
#include "SSMenuButtonSideChanger.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuButtonText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonText : public USSMenuButtonSideChanger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMenuButtonTextItemEntry> ItemEntries;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonTextDecidedEvent OnTextDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonTextDecidedNewEvent OnTextNewDecided;
    
    USSMenuButtonText();

};

