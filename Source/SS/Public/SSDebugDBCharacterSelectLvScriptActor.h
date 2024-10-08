#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSUiLevelScriptActor.h"
#include "SSDebugDBCharacterSelectLvScriptActor.generated.h"

UCLASS(Blueprintable)
class ASSDebugDBCharacterSelectLvScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultCharacter1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultCharacter2P;
    
    ASSDebugDBCharacterSelectLvScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LvScriptActorStartScreenFade();
    
};

