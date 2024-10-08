#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratSpaceAreaReplaceSetting.generated.h"

USTRUCT(BlueprintType)
struct FKoratSpaceAreaReplaceSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratSpaceAreaTypeDataList, FKoratInteractAtbTypeDataList> SettingMap;
    
    SS_API FKoratSpaceAreaReplaceSetting();
};

