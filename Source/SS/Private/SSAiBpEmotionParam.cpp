#include "SSAiBpEmotionParam.h"

FSSAiBpEmotionParam::FSSAiBpEmotionParam() {
    this->Type = EAiEmotionType::None;
    this->Value = 0;
    this->SignType = EKoratInequalitySignType::Equal;
    this->MinProbability = 0;
    this->MaxProbability = 0;
    this->EnableAiLevel = 0;
}

