#include "KoratSequencePlayDescription.h"

FKoratSequencePlayDescription::FKoratSequencePlayDescription() {
    this->bSequenceLoop = false;
    this->bPauseAtEnd = false;
    this->bCustomTimeDilation = false;
    this->bAutoPlayExec = false;
    this->StartFrame = 0;
}

