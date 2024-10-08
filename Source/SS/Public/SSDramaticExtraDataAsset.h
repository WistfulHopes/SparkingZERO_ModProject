#pragma once
#include "CoreMinimal.h"
#include "DaramaticExtraBattleDataStruct.h"
#include "MutualDataAsset.h"
#include "SSDramaticExtraDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticExtraDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDaramaticExtraBattleDataStruct> PtrRecords;
    
public:
    USSDramaticExtraDataAsset();

};

