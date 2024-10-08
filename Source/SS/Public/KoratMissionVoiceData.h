#pragma once
#include "CoreMinimal.h"
#include "KoratConversationDataList.h"
#include "KoratMissionVoiceData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMissionVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList VoiceIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList VoiceReceipt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList VoiceBulkReceipt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList VoiceAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList VoiceAlone;
    
    SS_API FKoratMissionVoiceData();
};

