#pragma once
#include "CoreMinimal.h"
#include "EKoratTeamCharacterIndex.h"
#include "SSTeamTalkSettingData.generated.h"

USTRUCT(BlueprintType)
struct FSSTeamTalkSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UpdateNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratTeamCharacterIndex, FString> ConversationVoiceMap;
    
    SS_API FSSTeamTalkSettingData();
};

