#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratSpaceAreaSettingDataList.h"
#include "KoratInteractSpaceAreaTypeParam.generated.h"

UCLASS(Blueprintable)
class UKoratInteractSpaceAreaTypeParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaSettingDataList SpaceAreaTypeData;
    
    UKoratInteractSpaceAreaTypeParam();

};

