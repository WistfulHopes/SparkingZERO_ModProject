#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratConversationDataAsset.generated.h"

class USSConversationDataAsset;

UCLASS(Blueprintable)
class UKoratConversationDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSConversationDataAsset* BattleTrainingVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSConversationDataAsset* TutorialVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSConversationDataAsset* TenkaichiVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSConversationDataAsset* ShopVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSConversationDataAsset* MissionVoiceList;
    
public:
    UKoratConversationDataAsset();

};

