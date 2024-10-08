#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSLightingPositonMethod.h"
#include "SSOutlineMeshSetting.h"
#include "SSToonShadingSetting.generated.h"

USTRUCT(BlueprintType)
struct FSSToonShadingSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSOutlineMeshSetting> MeshSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSLightingPositonMethod LightTargetEvaluationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightTargetEvaluationSpaceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightSourceEvaluationSpaceBone;
    
    SS_API FSSToonShadingSetting();
};

