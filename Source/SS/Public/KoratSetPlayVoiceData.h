#pragma once
#include "CoreMinimal.h"
#include "KoratSetPlayVoiceDataRecord.h"
#include "KoratSetPlayVoiceData.generated.h"

USTRUCT(BlueprintType)
struct FKoratSetPlayVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSetPlayVoiceDataRecord> SetInfo;
    
    SS_API FKoratSetPlayVoiceData();
};

