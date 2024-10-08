#pragma once
#include "CoreMinimal.h"
#include "EShakeForceLerpType.h"
#include "EShakeForceShapeType.h"
#include "EShakeListenerType.h"
#include "KoratShakeForceTypeDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratShakeForceTypeDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShakeListenerType ListenerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShakeForceShapeType ForceShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShakeForceLerpType ForceLerpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceLerpExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadSpeed;
    
    SS_API FKoratShakeForceTypeDataAssetRecord();
};

