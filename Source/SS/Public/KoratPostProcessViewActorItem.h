#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessViewActorSubItem.h"
#include "KoratPostProcessViewActorItem.generated.h"

USTRUCT(BlueprintType)
struct FKoratPostProcessViewActorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FKoratPostProcessViewActorSubItem> List;
    
    SS_API FKoratPostProcessViewActorItem();
};

