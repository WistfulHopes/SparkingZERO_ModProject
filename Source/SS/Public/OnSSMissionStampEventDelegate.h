#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "SSMissionUserDataSaveData.h"
#include "OnSSMissionStampEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSSMissionStampEvent, FKoratMissionDataList&, InMissionId, FSSMissionUserDataSaveData&, InUserData);

