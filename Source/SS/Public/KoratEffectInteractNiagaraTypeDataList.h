#pragma once
#include "CoreMinimal.h"
#include "KoratEffectInteractNiagaraTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectInteractNiagaraTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEffectInteractNiagaraTypeDataList();
};

