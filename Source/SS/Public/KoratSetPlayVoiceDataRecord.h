#pragma once
#include "CoreMinimal.h"
#include "KoratSetPlayVoiceDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratSetPlayVoiceDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayCueSetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    SS_API FKoratSetPlayVoiceDataRecord();
};

