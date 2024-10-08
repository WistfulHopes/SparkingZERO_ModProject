#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessViewAgentValueItem.h"
#include "KoratPostProcessViewActorSubItem.generated.h"

USTRUCT(BlueprintType)
struct FKoratPostProcessViewActorSubItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FKoratPostProcessViewAgentValueItem> agentNameList;
    
    SS_API FKoratPostProcessViewActorSubItem();
};

