#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSDragonAdventureIFRouteClearInfoAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFRouteClearInfoAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> EventInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOriginalRoute;
    
    SS_API FSSDragonAdventureIFRouteClearInfoAssetRecord();
};

