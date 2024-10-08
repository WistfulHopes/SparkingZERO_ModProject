#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratCharacterUIActionDataAsset.generated.h"

class UKoratMLSDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratCharacterUIActionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UKoratMLSDataAsset*, UKoratMLSDataAsset*> PtrRecords;
    
    UKoratCharacterUIActionDataAsset();

};

