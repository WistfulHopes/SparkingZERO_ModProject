#pragma once
#include "CoreMinimal.h"
#include "KoratDragonAdventureIFRouteClearInfoDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDragonAdventureIFRouteClearInfoDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDragonAdventureIFRouteClearInfoDataList();
};

