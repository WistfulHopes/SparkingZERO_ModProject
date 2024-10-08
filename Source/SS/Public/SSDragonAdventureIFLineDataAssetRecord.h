#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFLineDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFLineDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeginEventBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndEventBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConnectBeginEventBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConnectEndEventBlock;
    
    SS_API FSSDragonAdventureIFLineDataAssetRecord();
};

