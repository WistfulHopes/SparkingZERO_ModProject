#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratPlayerStartDataList.h"
#include "SSCharacter.h"
#include "KoratDemoEventCharacter.generated.h"

UCLASS(Blueprintable)
class AKoratDemoEventCharacter : public ASSCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList CharacterStartKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayCharacter PlayCharacterData;
    
    AKoratDemoEventCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupEditorComponents();
    
};

