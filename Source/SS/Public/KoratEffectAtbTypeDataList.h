#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectAtbTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectAtbTypeDataList();
};

