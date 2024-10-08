#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratEventSceneDataList.h"
#include "SSEventSceneCompositeActor.generated.h"

class ULevelSequence;
class USSDragonAdventureIFBattleDataAsset;
class USSEventSceneDataAsset;

UCLASS(Blueprintable)
class ASSEventSceneCompositeActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEventSceneDataList EventSceneDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEventSceneDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartSubscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* TransitionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFBattleDataAsset* BattleData;
    
public:
    ASSEventSceneCompositeActor(const FObjectInitializer& ObjectInitializer);

};

