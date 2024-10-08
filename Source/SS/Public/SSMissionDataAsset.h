#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMissionDataAsset.generated.h"

class USSMissionDataRecord;

UCLASS(Blueprintable)
class USSMissionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSMissionDataRecord*> PtrRecords;
    
public:
    USSMissionDataAsset();

};

