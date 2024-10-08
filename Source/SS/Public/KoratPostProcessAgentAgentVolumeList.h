#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessAgentAgentVolumeList.generated.h"

class AKoratPostProcessAgentVolume;

USTRUCT(BlueprintType)
struct FKoratPostProcessAgentAgentVolumeList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AKoratPostProcessAgentVolume>> List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SerialCount;
    
public:
    SS_API FKoratPostProcessAgentAgentVolumeList();
};

