#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditTutorialMode.h"
#include "KoratDramaticEditWholeSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticEditWholeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticEditTutorialMode EditTutorialState;
    
    FKoratDramaticEditWholeSaveData();
};

