#pragma once
#include "CoreMinimal.h"
#include "AtomLipSyncSectionParameter.generated.h"

USTRUCT(BlueprintType)
struct FAtomLipSyncSectionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInputSamplingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseMorphTargetBlendAmountAsJapanese;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LipSync_MorphTargetName_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LipSync_MorphTargetName_I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LipSync_MorphTargetName_U;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LipSync_MorphTargetName_E;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LipSync_MorphTargetName_O;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketNameForAttachingSound;
    
    CRIWAREADXLIPSYNC_API FAtomLipSyncSectionParameter();
};

