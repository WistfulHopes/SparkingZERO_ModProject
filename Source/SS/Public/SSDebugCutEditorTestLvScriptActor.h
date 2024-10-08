#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorCutType.h"
#include "KoratCharacterDataList.h"
#include "KoratMapDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSLevelScriptActor.h"
#include "SSDebugCutEditorTestLvScriptActor.generated.h"

UCLASS(Blueprintable)
class ASSDebugCutEditorTestLvScriptActor : public ASSLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMapDataList> StageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> CharacterStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList DefaultStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> DefaultCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> DefaultCharacterStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorCutType DefaultCutType;
    
    ASSDebugCutEditorTestLvScriptActor(const FObjectInitializer& ObjectInitializer);

};

