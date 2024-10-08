#pragma once
#include "CoreMinimal.h"
#include "AtomAisacControlSettingsParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomAisacControlSettingsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    CRIWARERUNTIME_API FAtomAisacControlSettingsParam();
};

