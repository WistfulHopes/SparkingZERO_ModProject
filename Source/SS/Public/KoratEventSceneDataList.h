#pragma once
#include "CoreMinimal.h"
#include "KoratEventSceneDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEventSceneDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEventSceneDataList();
};

