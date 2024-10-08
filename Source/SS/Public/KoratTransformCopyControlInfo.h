#pragma once
#include "CoreMinimal.h"
#include "EKoratTransformCopyExecuteType.h"
#include "KoratTransformCopyControlInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratTransformCopyControlInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTransformCopyExecuteType ExecuteType;
    
    SS_API FKoratTransformCopyControlInfo();
};

