#pragma once
#include "CoreMinimal.h"
#include "EExhibitionType.h"
#include "ESSDragonAdventureIFCharaActionType.h"
#include "KoratDragonAdventureIFRouteClearInfoDataList.h"
#include "KoratPlayerStartDataList.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFExhibitionSetting.h"
#include "SSDragonAdventureIFCharacterDataAsset.generated.h"

class AActor;
class AStaticMeshActor;
class ULevelSequence;
class USSDragonAdventureIFEventDataAsset;

UCLASS(Blueprintable)
class USSDragonAdventureIFCharacterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText IntroductionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterLocaterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterLocaterOffsetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> CharcterBaseObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AStaticMeshActor> CharcterBaseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseLocaterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList StartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CameraSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CameraSequencerFromMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureIFCharaActionType, TSoftObjectPtr<ULevelSequence>> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFEventDataAsset* EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartEventBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDragonAdventureIFRouteClearInfoDataList> RouteClearInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EExhibitionType, FSSDragonAdventureIFExhibitionSetting> ExhibitionEndEventMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DirectingSequencer;
    
    USSDragonAdventureIFCharacterDataAsset();

};

