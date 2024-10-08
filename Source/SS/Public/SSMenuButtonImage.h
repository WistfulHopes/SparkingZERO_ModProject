#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonImageDecidedEventDelegate.h"
#include "OnSSMenuButtonImageDecidedNewEventDelegate.h"
#include "SSMenuButtonImageItemEntry.h"
#include "SSMenuButtonImageLangItem.h"
#include "SSMenuButtonSideChanger.h"
#include "SSMenuButtonImage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonImage : public USSMenuButtonSideChanger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMenuButtonImageItemEntry> ItemEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMenuButtonImageLangItem> ImageTextureList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonImageDecidedEvent OnTextDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonImageDecidedNewEvent OnTextNewDecided;
    
    USSMenuButtonImage();

};

