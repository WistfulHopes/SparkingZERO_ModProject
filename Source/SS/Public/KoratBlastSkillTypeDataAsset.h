#pragma once
#include "CoreMinimal.h"
#include "KoratBlastSkillTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBlastSkillTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBlastSkillTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBlastSkillTypeDataAssetRecord> Records;
    
public:
    UKoratBlastSkillTypeDataAsset();

};

