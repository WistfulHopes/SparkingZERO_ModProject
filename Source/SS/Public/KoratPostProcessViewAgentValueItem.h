#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessViewAgentItem.h"
#include "KoratPostProcessViewAgentValueItem.generated.h"

USTRUCT(BlueprintType)
struct FKoratPostProcessViewAgentValueItem : public FKoratPostProcessViewAgentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Value;
    
    SS_API FKoratPostProcessViewAgentValueItem();
};

