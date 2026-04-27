#pragma once
#include "CoreMinimal.h"
#include "EKoratTermsMode.h"
#include "EKoratTutorialMode.h"
#include "SSSaveCheckData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSSaveCheckData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTermsMode TermsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTutorialMode TutorialMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankPoint;
    
    FSSSaveCheckData();
};

