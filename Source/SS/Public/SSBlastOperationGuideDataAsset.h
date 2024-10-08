#pragma once
#include "CoreMinimal.h"
#include "KoratBlastGroupOperationData.h"
#include "MutualDataAsset.h"
#include "SSBlastOperationGuideDataAsset.generated.h"

UCLASS(Blueprintable)
class USSBlastOperationGuideDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastGroupOperationData BlastOperationGuideData;
    
    USSBlastOperationGuideDataAsset();

};

