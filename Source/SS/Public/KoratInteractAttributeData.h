#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratInteractAttributeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FKoratInteractAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaTypeDataList SpaceAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> HitActor;
    
    SS_API FKoratInteractAttributeData();
};

