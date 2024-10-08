#pragma once
#include "CoreMinimal.h"
#include "KoratSearchData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratSearchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> LevelSequenceArray;
    
    SS_API FKoratSearchData();
};

