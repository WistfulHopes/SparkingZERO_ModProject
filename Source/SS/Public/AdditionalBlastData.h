#pragma once
#include "CoreMinimal.h"
#include "EKoratBlastSlotType.h"
#include "AdditionalBlastData.generated.h"

class USSBlastForteDataAsset;
class USSBlastSkillDataAsset;
class USSBlastUltimateDataAsset;

USTRUCT(BlueprintType)
struct FAdditionalBlastData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBlastSlotType Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastForteDataAsset* ForteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastSkillDataAsset* SkillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastUltimateDataAsset* UltimateData;
    
    SS_API FAdditionalBlastData();
};

