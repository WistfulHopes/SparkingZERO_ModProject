#pragma once
#include "CoreMinimal.h"
#include "KoratEffectCharacterColorDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectCharacterColorDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectCharacterColorDataList();
};

