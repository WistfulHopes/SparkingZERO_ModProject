#include "SSDebugOnlineBtlTest_Setting.h"

USSDebugOnlineBtlTest_Setting::USSDebugOnlineBtlTest_Setting() {
    this->Last_MatchType = EDebugOnlineBtl_MatchType::Local1P;
    this->Last_BattleLogType = EDebugOnlineBtl_BattleLogType::None;
    this->Last_TimeLimitType = EDebugOnlineBtl_TimeLimitType::Time240;
    this->Last_ServerApiType = EDebugOnlineBtl_ServerApiType::DummyAuth;
    this->Last_AiType = EDebugOnlineBtl_AiType::Normal;
    this->Last_NetStressType = EDebugOnlineBtl_NetStressType::None;
}


