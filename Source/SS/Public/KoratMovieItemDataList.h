#pragma once
#include "CoreMinimal.h"
#include "KoratMovieItemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMovieItemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMovieItemDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratMovieItemDataList) { return 0; }

