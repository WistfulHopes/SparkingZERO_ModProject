#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratInteractAtbTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratInteractAtbTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratInteractAtbTypeDataList) { return 0; }

