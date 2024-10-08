#pragma once
#include "CoreMinimal.h"
#include "KoratBlastReactionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastReactionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastReactionDataList();
};

