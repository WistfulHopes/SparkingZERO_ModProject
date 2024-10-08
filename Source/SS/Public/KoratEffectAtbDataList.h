#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbTypeDataList.h"
#include "KoratMapAttributeDataList.h"
#include "KoratEffectAtbDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectAtbDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapAttributeDataList Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectAtbTypeDataList Type;
    
    FKoratEffectAtbDataList();
};

