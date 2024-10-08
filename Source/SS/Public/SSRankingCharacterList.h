#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSRankingCharacterList.generated.h"

class USSMenuButton;
class USSRemoteButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSRankingCharacterList : public USSMenuViewScroll {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CharacterNameText;
    
public:
    USSRankingCharacterList();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void DecidedButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

