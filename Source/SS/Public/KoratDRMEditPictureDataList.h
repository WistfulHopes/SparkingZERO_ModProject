#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditPictureDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditPictureDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditPictureDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDRMEditPictureDataList) { return 0; }

