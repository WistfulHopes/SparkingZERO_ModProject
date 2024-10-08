#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditActionDataList.h"
#include "KoratDRMEditCameraDataList.h"
#include "SSDRMEditSituationErrorCombination.generated.h"

USTRUCT(BlueprintType)
struct FSSDRMEditSituationErrorCombination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditCameraDataList Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditActionDataList Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PositionIndex;
    
    SS_API FSSDRMEditSituationErrorCombination();
};

FORCEINLINE uint32 GetTypeHash(const FSSDRMEditSituationErrorCombination) { return 0; }