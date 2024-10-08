#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratAuraLevelDataList.h"
#include "SSAuraAssignDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSAuraAssignDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAuraLevelDataList AuraLevelKey;
    
    SS_API FSSAuraAssignDataAssetRecord();
};

