#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonIndexOnChangeIndexDelegate.h"
#include "SSMenuButtonSideChanger.h"
#include "SSMenuButtonIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonIndex : public USSMenuButtonSideChanger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonIndexOnChangeIndex OnChangeIndex;
    
    USSMenuButtonIndex();

    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(const int32 InIndexToSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetItemNum(const int32 InItemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreSelectedIndex() const;
    
};

