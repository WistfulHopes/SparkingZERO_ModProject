#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSMenuViewScroll.h"
#include "SSBattleSetupFormSelectWindow.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupFormSelectWindow : public USSMenuViewScroll {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> AllFormCharacters;
    
public:
    USSBattleSetupFormSelectWindow();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeCharaIconButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex);
    
};

