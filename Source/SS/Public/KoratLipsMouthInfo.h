#pragma once
#include "CoreMinimal.h"
#include "CriLipsMorphTargetBlendAmountAsJapanese.h"
#include "CriLipsMouthInfo.h"
#include "EKoratLipsAnalyzerStatus.h"
#include "KoratLipsMouthInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratLipsMouthInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCriLipsMouthInfo CriMouthInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCriLipsMorphTargetBlendAmountAsJapanese CriLipsMorphTargetBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratLipsAnalyzerStatus AnalyzerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    SS_API FKoratLipsMouthInfo();
};

