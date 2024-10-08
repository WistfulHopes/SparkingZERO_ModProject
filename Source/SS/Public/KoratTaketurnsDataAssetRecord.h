#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratVanishingMove.h"
#include "KoratTaketurnsDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratTaketurnsDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratVanishingMove ChaseChangeEntranceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AnimMontageOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrawVanishingEffect;
    
    SS_API FKoratTaketurnsDataAssetRecord();
};

