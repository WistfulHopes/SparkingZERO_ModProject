#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterFigureDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterFigureDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterFigureDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCharacterFigureDataList) { return 0; }

