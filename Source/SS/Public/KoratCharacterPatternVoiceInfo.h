#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterPatternVoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterPatternVoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PatternName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceName;
    
    SS_API FKoratCharacterPatternVoiceInfo();
};

