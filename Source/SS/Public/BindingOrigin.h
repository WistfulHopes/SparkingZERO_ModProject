#pragma once
#include "CoreMinimal.h"
#include "BindingOrigin.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBindingOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraRelativeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> LocalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugBindingOriginLevelSequencePath;
    
    SS_API FBindingOrigin();
};

