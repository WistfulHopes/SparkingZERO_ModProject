#pragma once
#include "CoreMinimal.h"
#include "SSOptionSoundVisibleFlags.generated.h"

USTRUCT(BlueprintType)
struct FSSOptionSoundVisibleFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBgmVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoiceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimSong;
    
    SS_API FSSOptionSoundVisibleFlags();
};

