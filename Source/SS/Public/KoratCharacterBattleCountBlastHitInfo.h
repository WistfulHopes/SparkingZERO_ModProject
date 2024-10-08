#pragma once
#include "CoreMinimal.h"
#include "ESSBlastDemoBranchType.h"
#include "KoratBlastActionDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterBattleCountBlastHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterBattleCountBlastHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionDataList BlastAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSBlastDemoBranchType DemoBranchType;
    
    SS_API FKoratCharacterBattleCountBlastHitInfo();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCharacterBattleCountBlastHitInfo) { return 0; }

