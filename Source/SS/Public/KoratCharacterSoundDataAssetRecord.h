#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterPatternVoiceInfo.h"
#include "KoratCharacterSoundDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterSoundDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceCueSheetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundEffectCueSheetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterPatternVoiceInfo> PatternVoiceList;
    
    SS_API FKoratCharacterSoundDataAssetRecord();
};

