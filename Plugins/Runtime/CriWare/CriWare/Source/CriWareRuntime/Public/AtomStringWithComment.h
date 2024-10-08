#pragma once
#include "CoreMinimal.h"
#include "AtomStringWithComment.generated.h"

USTRUCT(BlueprintType)
struct FAtomStringWithComment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    CRIWARERUNTIME_API FAtomStringWithComment();
};

