#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "KoratDramaticBattlePostData.h"
#include "SSEventSceneCompileDescriptionDE.h"
#include "SSWorldLibrarySaveData.generated.h"

UCLASS(Blueprintable)
class SS_API USSWorldLibrarySaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattlePostData WorldLibraryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneCompileDescriptionDE> Scenes;
    
    USSWorldLibrarySaveData();

};

