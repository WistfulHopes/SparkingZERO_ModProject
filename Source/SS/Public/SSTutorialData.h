#pragma once
#include "CoreMinimal.h"
#include "EKoratTutorialMode.h"
#include "SSTutorialData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSTutorialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTutorialMode TutorialMode;
    
    FSSTutorialData();
};

