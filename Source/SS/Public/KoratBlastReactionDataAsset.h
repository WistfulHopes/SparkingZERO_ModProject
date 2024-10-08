#pragma once
#include "CoreMinimal.h"
#include "KoratBlastReactionDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBlastReactionDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBlastReactionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBlastReactionDataAssetRecord> Records;
    
public:
    UKoratBlastReactionDataAsset();

};

