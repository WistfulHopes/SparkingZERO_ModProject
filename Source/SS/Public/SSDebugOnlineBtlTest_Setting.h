#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDebugOnlineBtl_AiType.h"
#include "EDebugOnlineBtl_BattleLogType.h"
#include "EDebugOnlineBtl_MatchType.h"
#include "EDebugOnlineBtl_NetStressType.h"
#include "EDebugOnlineBtl_ServerApiType.h"
#include "EDebugOnlineBtl_TimeLimitType.h"
#include "SSDebugOnlineBtlTest_Setting.generated.h"

UCLASS(Blueprintable, Config=Game)
class USSDebugOnlineBtlTest_Setting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugOnlineBtl_MatchType Last_MatchType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugOnlineBtl_BattleLogType Last_BattleLogType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugOnlineBtl_TimeLimitType Last_TimeLimitType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugOnlineBtl_ServerApiType Last_ServerApiType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugOnlineBtl_AiType Last_AiType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugOnlineBtl_NetStressType Last_NetStressType;
    
    USSDebugOnlineBtlTest_Setting();

};

