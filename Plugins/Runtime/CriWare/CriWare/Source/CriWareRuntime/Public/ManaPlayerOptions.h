#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EManaFrameAction.h"
#include "EManaMaxFrameDrop.h"
#include "EManaPlaybackTimer.h"
#include "EManaPlayerOptionBooleanOverride.h"
#include "ManaPlayerTrackOptions.h"
#include "ManaPlayerOptions.generated.h"

class UAtomComponent;

USTRUCT(BlueprintType)
struct FManaPlayerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManaPlayerTrackOptions Tracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan SeekTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaPlayerOptionBooleanOverride PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaPlayerOptionBooleanOverride Loop;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaPlaybackTimer PlaybackTimer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaMaxFrameDrop MaxFrameDrop;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaFrameAction EndFrameAction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* TimeSyncedSource;
    
    CRIWARERUNTIME_API FManaPlayerOptions();
};

