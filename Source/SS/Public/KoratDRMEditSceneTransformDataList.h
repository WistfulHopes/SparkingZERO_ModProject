#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditSceneTransformDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditSceneTransformDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditSceneTransformDataList();
};

