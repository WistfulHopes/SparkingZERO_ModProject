#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "OnSSBattleSetupCharaIconEvnetDelegate.h"
#include "SSMenuManager.h"
#include "SSBattleSetupCharaList.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupCharaList : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSBattleSetupCharaIconEvnet OnCharaPanelFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSBattleSetupCharaIconEvnet OnCharaPanelDecided;
    
    USSBattleSetupCharaList();

private:
    UFUNCTION(BlueprintCallable)
    void FocusedPanel(UObject* InObject, const FKoratCharacterDataList& InCharacterData);
    
    UFUNCTION(BlueprintCallable)
    void DecidedPanel(UObject* InObject, const FKoratCharacterDataList& InCharacterData);
    
};

