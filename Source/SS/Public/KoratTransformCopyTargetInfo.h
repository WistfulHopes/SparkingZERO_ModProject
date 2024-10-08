#pragma once
#include "CoreMinimal.h"
#include "KoratTransformCopyTargetInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FKoratTransformCopyTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ReferenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    SS_API FKoratTransformCopyTargetInfo();
};

