#pragma once
#include "CoreMinimal.h"
#include "ESSSoundGroupType.h"
#include "KoratCharacterDataList.h"
#include "SSPaperTheaterSoundData.generated.h"

USTRUCT(BlueprintType)
struct FSSPaperTheaterSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSSoundGroupType SoundGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterID;
    
    SS_API FSSPaperTheaterSoundData();
};

