#pragma once
#include "CoreMinimal.h"
#include "SSTournamentSelectResDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSTournamentSelectResDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> Resource;
    
    SS_API FSSTournamentSelectResDataAssetRecord();
};

