#pragma once
#include "CoreMinimal.h"
#include "KoratOperationGuideDataRecord.h"
#include "MutualDataAsset.h"
#include "SSOperationGuideDataAsset.generated.h"

UCLASS(Blueprintable)
class USSOperationGuideDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratOperationGuideDataRecord> Records;
    
public:
    USSOperationGuideDataAsset();

};

