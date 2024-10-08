#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessAgentAgentChameleonList.generated.h"

class AKoratPostProcessAgentChameleon;

USTRUCT(BlueprintType)
struct FKoratPostProcessAgentAgentChameleonList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AKoratPostProcessAgentChameleon>> List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SerialCount;
    
public:
    SS_API FKoratPostProcessAgentAgentChameleonList();
};

