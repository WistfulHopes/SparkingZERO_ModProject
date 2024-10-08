#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratCharacterBattleCountType.h"
#include "KoratActionDataList.h"
#include "KoratBlastActionDataList.h"
#include "KoratBlastGroupDataList.h"
#include "KoratCharacterBattleCountBlastHitInfo.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratCharacterBattleCount.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterBattleCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComboNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxComboDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GivenDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TakenDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan BattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratCharacterBattleCountType, int32> BattleNumCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBlastGroupDataList, int32> UseBlastGroupCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, int32> AttackHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBlastActionDataList, int32> RunBlastCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterBattleCountBlastHitInfo, int32> BlastHitDemoInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, int32> ThrowFinishInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterItemDataList, int32> RunEmoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragonDashMileage;
    
    SS_API FKoratCharacterBattleCount();
};

