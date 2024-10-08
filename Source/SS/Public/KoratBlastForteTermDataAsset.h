#pragma once
#include "CoreMinimal.h"
#include "KoratBlastForteTermDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBlastForteTermDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBlastForteTermDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBlastForteTermDataAssetRecord> Records;
    
public:
    UKoratBlastForteTermDataAsset();

};

