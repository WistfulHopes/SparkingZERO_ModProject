#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelinePlaybckSettings.h"
#include "KoratSequencePlayInfo.h"
#include "KoratFreeTimelinePlayerHandle.generated.h"

class UKoratFreeTimelinePlayerBase;
class UKoratPlayerRequestController;
class UObject;

USTRUCT(BlueprintType)
struct FKoratFreeTimelinePlayerHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UniqueHandleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayedOTLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPlayerRequestController* RequestController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelinePlaybckSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencePlayInfo> PlayDetailInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratSequencePlayInfo PrevRequestPlayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelinePlayerBase* FreeTimelinePlayerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* UsedAsset;
    
    SS_API FKoratFreeTimelinePlayerHandle();
};

