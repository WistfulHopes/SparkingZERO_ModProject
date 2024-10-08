#pragma once
#include "CoreMinimal.h"
#include "SSOptionEtcVisibleFlags.generated.h"

USTRUCT(BlueprintType)
struct FSSOptionEtcVisibleFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnalysis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEULA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrivacyPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightsNotation;
    
    SS_API FSSOptionEtcVisibleFlags();
};

