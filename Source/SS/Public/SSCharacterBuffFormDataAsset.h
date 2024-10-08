#pragma once
#include "CoreMinimal.h"
#include "KoratBuffFormTypeDataList.h"
#include "MutualDataAsset.h"
#include "SSCharacterBuffFormDataAssetRecord.h"
#include "SSCharacterBuffFormDataAsset.generated.h"

UCLASS(Blueprintable)
class USSCharacterBuffFormDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBuffFormTypeDataList, FSSCharacterBuffFormDataAssetRecord> RecordsByDataList;
    
    USSCharacterBuffFormDataAsset();

};

