#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratMapDataList.h"
#include "SSBattleLevelScriptActor.h"
#include "SSLaboCompoCharacterIdInfo.h"
#include "Templates/SubclassOf.h"
#include "SSLaboCompositeLevelScriptActor.generated.h"

class AActor;
class ASSCutCameraDirector;

UCLASS(Blueprintable)
class SS_API ASSLaboCompositeLevelScriptActor : public ASSBattleLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLaboCompoCharacterIdInfo CharacterIdPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenSequencerAlwaysLoadCharData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList GenerateMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> CharacterActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid FocusActorGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> TemporaryCharacterActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASSCutCameraDirector> MenuCameraDirectorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BattleSetupCameraFocusTransformActors;
    
public:
    ASSLaboCompositeLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

