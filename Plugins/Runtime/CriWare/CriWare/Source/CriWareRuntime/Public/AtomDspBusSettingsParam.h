#pragma once
#include "CoreMinimal.h"
#include "AtomStringWithComment.h"
#include "AtomDspBusSettingsParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomDspBusSettingsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BusSettingsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomStringWithComment> Snapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomStringWithComment> Bus;
    
    CRIWARERUNTIME_API FAtomDspBusSettingsParam();
};

