#pragma once
#include "CoreMinimal.h"
#include "KoratBattleConversationSet.h"
#include "MutualDataAsset.h"
#include "SSConversationDataAsset.generated.h"

UCLASS(Blueprintable)
class USSConversationDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBattleConversationSet> ConversationSetList;
    
    USSConversationDataAsset();

};

