#pragma once
#include "CoreMinimal.h"
#include "SSWarpBoxRegion.h"
#include "SSLayeredBoxSafeArea.generated.h"

USTRUCT(BlueprintType)
struct FSSLayeredBoxSafeArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpBoxRegion Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEffective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeedRecoveryWarp;
    
    SS_API FSSLayeredBoxSafeArea();
};

