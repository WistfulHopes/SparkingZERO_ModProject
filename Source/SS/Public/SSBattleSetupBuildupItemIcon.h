#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "SSRemoteButton.h"
#include "SSBattleSetupBuildupItemIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupBuildupItemIcon : public USSRemoteButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemDispButtonSwitcherName;
    
public:
    USSBattleSetupBuildupItemIcon();

    UFUNCTION(BlueprintCallable)
    void SetCharacterItem(const FKoratCharacterItemDataList& InCharacterItemData);
    
};

