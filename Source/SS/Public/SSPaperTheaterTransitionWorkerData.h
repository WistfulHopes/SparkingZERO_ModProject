#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSPaperTheaterTransitionWorkerData.generated.h"

class ASSLevelSequenceActor;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSSPaperTheaterTransitionWorkerData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* PaperTheaterOTLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CutImage;
    
    SS_API FSSPaperTheaterTransitionWorkerData();
};

