#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSRemoteButton.h"
#include "SSBattleSetupCharaIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupCharaIcon : public USSRemoteButton {
    GENERATED_BODY()
public:
    USSBattleSetupCharaIcon();

    UFUNCTION(BlueprintCallable)
    void SetCharacterData(const FKoratCharacterDataList& InCharacterData, int32 InPlayerIndex);
    
};

