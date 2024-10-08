#pragma once
#include "CoreMinimal.h"
#include "SSBattleLevelScriptActor.h"
#include "KoratEffectCompositeLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class AKoratEffectCompositeLevelScriptActor : public ASSBattleLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenSequencerAlwaysLoadCharData;
    
    AKoratEffectCompositeLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitMapEvent();
    
    UFUNCTION(BlueprintCallable)
    void LoadLevelCharacters();
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffectAssets();
    
};

