#include "SSNotificationManager.h"

USSNotificationManager::USSNotificationManager() {
    this->CommonNotificationWidget = NULL;
    this->ItemNotificationWidget = NULL;
    this->CriticalNotificationWidget = NULL;
    this->World = NULL;
}

void USSNotificationManager::RegisterNotification(FKoratNotificationDataList InDataList, TMap<FString, FText> InReplaceText) {
}


