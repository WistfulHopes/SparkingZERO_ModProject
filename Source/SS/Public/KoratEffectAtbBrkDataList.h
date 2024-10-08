#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbBrkTypeDataList.h"
#include "KoratMapAttributeDataList.h"
#include "KoratEffectAtbBrkDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectAtbBrkDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapAttributeDataList Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectAtbBrkTypeDataList Type;
    
    FKoratEffectAtbBrkDataList();
};

