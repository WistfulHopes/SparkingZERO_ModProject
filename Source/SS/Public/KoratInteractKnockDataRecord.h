#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractKnockPlayData.h"
#include "KoratInteractKnockDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratInteractKnockDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractKnockPlayData KnockDestructionPlayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractKnockPlayData KnockNonDestructionPlayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractKnockPlayData CollisionKnockPlayData;
    
    SS_API FKoratInteractKnockDataRecord();
};

