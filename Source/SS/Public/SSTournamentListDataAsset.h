#pragma once
#include "CoreMinimal.h"
#include "KoratConversationDataList.h"
#include "MutualDataAsset.h"
#include "SSTournamentRuleSet.h"
#include "SSTournamentListDataAsset.generated.h"

class USSTournamentDataAsset;
class UTexture2D;

UCLASS(Blueprintable)
class USSTournamentListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTournamentRuleSet DefaultEditTournamentRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMaxDP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> RoundTitleTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList EntryTopVoiceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRequireCharacterSingleBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRequireCharacterTeamBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTournamentDataAsset*> PtrRecords;
    
    USSTournamentListDataAsset();

};

