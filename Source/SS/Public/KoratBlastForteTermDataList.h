#pragma once
#include "CoreMinimal.h"
#include "KoratBlastForteTermDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastForteTermDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastForteTermDataList();
};

