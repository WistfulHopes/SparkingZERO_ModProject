#include "SSNotificationDataAssetRecord.h"

FSSNotificationDataAssetRecord::FSSNotificationDataAssetRecord() {
    this->Mode = ENotificationMode::Normal;
    this->Type = ENotificationType::None;
    this->Priority = 0;
    this->Timing = ENotificationTiming::None;
    this->bNeedSave = false;
}

