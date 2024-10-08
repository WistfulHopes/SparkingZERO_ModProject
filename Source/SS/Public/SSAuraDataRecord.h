#pragma once
#include "CoreMinimal.h"
#include "KoratRimLightFrequencyDataList.h"
#include "SSAuraDataRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSAuraDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyDataList Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    SS_API FSSAuraDataRecord();
};

