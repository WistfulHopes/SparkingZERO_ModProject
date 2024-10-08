#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonSideChanger.h"
#include "SSOptionButtonKeyInputItemEntry.h"
#include "SSOptionButtonKeyInput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionButtonKeyInput : public USSMenuButtonSideChanger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSOptionButtonKeyInputItemEntry> ItemEntries;
    
    USSOptionButtonKeyInput();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePad_Wait();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeOperationType();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeKey_Wait_Error();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeKey_Wait();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetIsChanging();
    
};

