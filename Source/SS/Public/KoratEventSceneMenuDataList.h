#pragma once
#include "CoreMinimal.h"
#include "KoratEventSceneMenuDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEventSceneMenuDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEventSceneMenuDataList();
};

