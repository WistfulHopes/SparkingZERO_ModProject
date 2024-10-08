#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "OnSSCharaSelectCharaIconEvnetDelegate.h"
#include "SSMenuManager.h"
#include "SSCharaSelectCharaList.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class USSCharaSelectCharaList : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSCharaSelectCharaIconEvnet OnCharaPanelFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSCharaSelectCharaIconEvnet OnCharaPanelDecided;
    
    USSCharaSelectCharaList();

private:
    UFUNCTION(BlueprintCallable)
    void FocusedPanel(UObject* InObject, const FKoratCharacterDataList& InCharacterData);
    
    UFUNCTION(BlueprintCallable)
    void DecidedPanel(UObject* InObject, const FKoratCharacterDataList& InCharacterData);
    
};

