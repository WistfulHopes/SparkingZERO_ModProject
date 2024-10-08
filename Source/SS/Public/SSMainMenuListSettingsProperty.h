#pragma once
#include "CoreMinimal.h"
#include "EMainMenuListPropertySettingsType.h"
#include "KoratMatchingCondPropDataList.h"
#include "SSMainMenuListSettingsProperty.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuListSettingsProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PropertyLable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuListPropertySettingsType PropertyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMatchingCondPropDataList PropertyItemDataList;
    
    SS_API FSSMainMenuListSettingsProperty();
};

