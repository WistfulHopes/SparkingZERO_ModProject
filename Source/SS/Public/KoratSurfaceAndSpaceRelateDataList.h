#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratSurfaceAndSpaceRelateDataList.generated.h"

USTRUCT(BlueprintType)
struct FKoratSurfaceAndSpaceRelateDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaTypeDataList SpaceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList ReplaceAttribute;
    
    SS_API FKoratSurfaceAndSpaceRelateDataList();
};

