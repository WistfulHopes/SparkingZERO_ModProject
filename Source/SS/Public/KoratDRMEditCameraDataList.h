#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditCameraDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditCameraDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditCameraDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDRMEditCameraDataList) { return 0; }

